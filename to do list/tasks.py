tasks = []

def load_tasks():
    try:
        with open("tasks.txt","r") as f:
            for line in f:
                tasks.append(line.strip())
    except:
        pass

def save_tasks():
    with open("tasks.txt","w") as f:
        for task in tasks:
            f.write(task + "\n")

load_tasks()

while True:
    print("\n1.Add task")
    print("2.Show tasks")
    print("3.Delete task")
    print("4.Exit")

    choice = input("Choose: ")

    if choice == "1":
        task = input("Enter task: ")
        tasks.append(task)

    elif choice == "2":
        for i,t in enumerate(tasks):
            print(i+1,t)

    elif choice == "3":
        num = int(input("Task number: "))
        tasks.pop(num-1)

    elif choice == "4":
        save_tasks()
        break
