class Pet:
    def __init__(self, name, color):
        self.name = name
        self.color = color

class Magical(Pet):
    def __init__(self, name, color, species, qualities):
        self.species = species
        self.qualities = qualities
        Pet.__init__(self, name, color)

    def bio(self):
        print(self.name + " is a " + self.color + " " + self.species + ". " + self.species + "s can" + self.qualities + "!")


# RUNNING CODE

willow = Magical("Willow", "purple", "Pygmy Puff", " roll around and squeak. They also sing on special holidays")
sticky = Magical("Sticky", "dark brown", "Niffler", " steal anything that's shiny")

print("Welcome to the Magical Menagerie!")
print("We sell magical creatures from the wizarding world!")
print("For instance...we have")

magics = [willow, sticky]

for each in magics:
    print(each.name + "!")
    each.bio()
    print("and")
