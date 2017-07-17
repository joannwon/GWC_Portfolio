# CLASSES

class Pet:
    def __init__(self, name, color):
        self.name = name
        self.color = color

class Dog(Pet):
    def __init__(self, name, age, color, breed, attitude):
        self.breed = breed
        self.attitude = attitude
        Pet.__init__(self, name, age, color)
        self.adopted = False

    def getName(self):
        return self.name
    
    def speak(self):
        print("Woof!")

    def isAdopted():
        return self.adopted

    def setAdopted(self, adopt):
        self.adopted = adopt

    def bio(self):
        print(self.name + " is a " + self.color +
              " " + self.breed + " who is " + self.attitude + "!")


#RUNNING CODE
spot = Dog("Spot", "Black and White", "Terrier", "Friendly")
fred = Dog("Fred", "Brown", "Boxer", "Sassy")
clifford = Dog("Clifford", "2", "Red", "Big Red Dog", "Nice")

print("Welcome to the Girls Who Code Dog Shelter")
print("Let me introduce you to our dogs")

dogs = [spot, fred, clifford]

for each in dogs:
    each.speak()
    print("That's " + each.getName())
    each.bio()


    
