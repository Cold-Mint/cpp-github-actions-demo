#include <iostream>

int main() {
    std::cout << "cpp-github-actions-demo\n";
    std::cout << "Hello from GitHub Actions CI/CD!\n\n";

#ifdef NDEBUG
    std::cout << "Build type      : Release\n";
#else
    std::cout << "Build type      : Debug\n";
#endif


#if defined(__clang__)
    std::cout << "Compiler family : Clang\n";
    std::cout << "Compiler        : " << __VERSION__ << "\n";
#elif defined(__GNUC__)
    std::cout << "Compiler family : GCC\n";
    std::cout << "Compiler        : " << __VERSION__ << "\n";
#elif defined(_MSC_VER)
    std::cout << "Compiler family : MSVC\n";
    std::cout << "Compiler version: " << _MSC_FULL_VER << "\n";
#else
    std::cout << "Compiler family : Unknown\n";
#endif

    std::cout << "C++ standard    : " << __cplusplus << "\n";

#if defined(__ANDROID__)
    std::cout << "Platform        : Android\n";
#elif defined(__linux__)
    std::cout << "Platform        : Linux\n";
#elif defined(_WIN32)
    std::cout << "Platform        : Windows\n";
#elif defined(__APPLE__)
    std::cout << "Platform        : macOS\n";
#else
    std::cout << "Platform        : Unknown\n";
#endif

#if defined(__ANDROID__)
    std::cout << "ABI             : ";
#if defined(__aarch64__)
    std::cout << "arm64-v8a\n";
#elif defined(__arm__)
    std::cout << "armeabi-v7a\n";
#elif defined(__x86_64__)
    std::cout << "x86_64\n";
#elif defined(__i386__)
    std::cout << "x86\n";
#else
    std::cout << "unknown\n";
#endif
#endif

    std::cout << "Build date      : " << __DATE__ << " " << __TIME__ << "\n";

    return 0;
}
