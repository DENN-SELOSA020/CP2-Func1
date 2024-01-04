#include <iostream>

int MainMenu();
int InputData();
int Addition(int, int);
int Subtract(int, int);
int Multiply(int, int);
int Division(int, int);

int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
    	int MainMenu();
        do
        {
            std::cout << "Please input value 1: ";
            std::cin >> val1;
            std::cout << "Please input value 2: ";
            std::cin >> val2;
            
            switch (choice)
            {
            case 1:
            	int Addition(int val1, int val2);
                std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                break;
            case 2:
                std::cout << "Please input value 1: ";
                std::cin >> val1;
                std::cout << "Please input value 2: ";
                std::cin >> val2;
                std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
            case 3:
                std::cout << "Please input value 1: ";
                std::cin >> val1;
                std::cout << "Please input value 2: ";
                std::cin >> val2;
                std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;
            case 4:
                std::cout << "Please input value 1: ";
                std::cin >> val1;
                std::cout << "Please input value 2: ";
                std::cin >> val2;
                std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]: ";
        std::cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
}

int MainMenu(){
	int choice;
	 std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;
            
            system("cls");
            
    return choice;
}

int InputData(int no, int& val){
	std::cout << "Input value: ";
	std::cin >> val;
	return val;
}
int Addition(int x, int y){
	return x + y;
}
int Subtract(int x, int y){
	return x - y;
}
int Multiply(int x, int y){
	return x * y;
}
int Division(int x, int y){
	return x / y;
}
