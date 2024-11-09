#include<stdio.h>


int main() {
        int a;
        int b;
        int c;

        const char *elements[] = {
                "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron",
                "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon",
                "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus",
                "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium",
                "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese",
                "Iron", "Cobalt", "Nickel", "Copper", "Zinc",
                "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine",
                "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium",
                "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium",
                "Palladium", "Silver", "Cadmium", "Indium", "Tin",
                "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium",
                "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium",
                "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium",
                "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium",
                "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium",
                "Osmium", "Iridium", "Platinum", "Gold", "Mercury",
                "Thallium", "Lead", "Bismuth", "Polonium", "Astatine",
                "Radon", "Francium", "Radium", "Actinium", "Thorium",
                "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium",
                "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium",
                "Mendelevium", "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium",
                "Seaborgium", "Bohrium", "Hassium", "Meitnerium", "Darmstadtium",
                "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium",
                "Livermorium", "Tennessine", "Oganesson"
        };

        int atomic_number;

        printf("PERIODIX\n");
        printf("by fawwaz\n\n");
        printf("type 1 to search element\n");
        printf("type 2 to exit app\n");
        printf("ENTER: ");
        scanf("%d", &a);
        if(a==1){
                printf("enter atomic number to search for element\n");
                printf("ENTER: ");
                scanf("%d", &atomic_number);
                if(atomic_number >= 1 && atomic_number <= 20) {
                        printf("the element with atomic number %d is %s. \n", atomic_number, elements[atomic_number - 1]);
                } else {
                        printf("invalid atomic number, please enter a number between 1 and 118.\n");
                }


        } else {
                return 0;
        }

        return 0;



}