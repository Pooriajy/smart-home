#!/usr/bin/python
import sqlite3
import telebot
import requests

API_TOKEN = '<api_token>'

conn = sqlite3.connect("database.db")
cur = conn.cursor()

bot = telebot.TeleBot(API_TOKEN)


# Handle '/start' and '/help'
@bot.message_handler(commands=['help', 'start'])
def send_welcome(message):
    bot.reply_to(message,"Send commands to turn on and off")


@bot.message_handler(func=lambda message: True)
def echo_message(message):
    try:
        name, stat = message.split(' ')
        cur.execute(f"select ip from devices where name={name}")
        ip = cur.fetchone()
        r = None
        if stat == 'on':
            r = requests.get(ip+"/on")
        else:
            r = requests.get(ip+"/off")
        bot.reply_to(message,"OK")
    except Exception as e:
        bot.reply_to(message,e)

bot.infinity_polling()
