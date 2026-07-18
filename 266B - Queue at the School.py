class Student:
    def __init__(self, gender):
        self.gender = gender


n, t = map(int, input().split())
queue = input()

students = []

for ch in queue:
    students.append(Student(ch))

for _ in range(t):
    i = 0

    while i < n - 1:
        if students[i].gender == 'B' and students[i + 1].gender == 'G':
            students[i], students[i + 1] = students[i + 1], students[i]
            i += 2
        else:
            i += 1

result = ""

for student in students:
    result += student.gender

print(result)