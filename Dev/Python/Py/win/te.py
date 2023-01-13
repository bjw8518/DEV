from tkinter import *

root = Tk()
root.title("윈도우 테스트")
root.geometry("600x200")


label1 = Label(root,text="안녕하세요 닉네임을 입력해주세요")
label1.pack()

txt = Text(root, width=20, height=1)
txt.pack()

btn1 = Button(root, text="btn1")
btn1.pack()

root.mainloop()
