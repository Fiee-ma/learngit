#include<iostream>
#include<thread>

using namespace std;

void thread1() {
    for(int i=0;i<20;++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "thread1..." << endl;
    }
}

void thread2() {
    for (int i = 0; i<20; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "thread2..." << endl;
    }
}

int main(int argc, char* argv[]) {
    std::thread th1(thread1);   //实例化一个线程对象th1，该线程开始执行
    thread th2(thread2);
    cout << "main..." << endl;
    th1.join();
    th2.join();
    return 0;
}
