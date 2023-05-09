import web
import sqlite3


urls = ("/register/(*.)/(*.)","register")

conn = sqlite3.connect("database.db",check_same_thread=False)
cur = conn.cursor()


app = web.application(urls, globals())



class register:
    def GET(self, name, ip):
        cur.execute(f"select count(*) from devices where name={name}")
        count = cur.fetchone()
        if count == '0':
            cur.execute(f'insert into devices values({name},{ip})')
            conn.commit()
        else:
            cur.execute(f'update devices set ip={ip} where name={name}')
            conn.commit()
        return 'ok'









if __name__ == "__main__":
    app.run()
