#include<iostream>

int sum(int x, int y, int z) {
        int result;
        result = x + y + z;
        return result;
}

void sizeTest(int sum) {
        if (sum > 500) {
                std::cout << "The sum is greather than 500!" << std::endl;
        } else {
                std::cout << "The sum is less than 500!" << std::endl;
        }
}

void loopTest(int s) {
        int sum = s;
        for(int i=1; i < 10; i++) {
                std::cout << "Sum:" << sum << std::endl;
                sum = sum * i;
        }
}

int main (int argc,char* argv[]) {

        std::cout << "Hack the planet!\n";
        int answer;
        answer = sum(1,500,475);
        std::cout << "This is the sum:" << answer << std::endl;
        sizeTest(answer);
        loopTest(answer);
        return 0;
}



