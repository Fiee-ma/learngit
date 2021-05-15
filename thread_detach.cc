#include <iostream>
#include <chrono>
#include <thread>

void independentThread()
{
    std::cout << "Starting concurrent thread.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Exiting concurrent thread.\n";
}

void threadCaller()
{
    std::cout << "Starting thread caller.\n";
    std::thread t(independentThread);
     t.detach(); //分离,主线程和子线程彼此独立进行:不会出现join()的那种等待子线程结束再执行主线程;也不会出现什么都不操作,主线程结束后杀掉子线程,报abort的错误.
    //可被 joinable 的 thread 对象必须在他们销毁之前被主线程 join 或者将其设置为 detached,不然会报abort错误.
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Exiting thread caller.\n";
}

int main()
{
    threadCaller();
    std::this_thread::sleep_for(std::chrono::seconds(5));
}
