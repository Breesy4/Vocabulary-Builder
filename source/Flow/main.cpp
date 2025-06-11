#include "InputManager.h"


int main() {
    InputManager_Text TextFile;
    const IInputManager& File = TextFile;
    File.TestFunction();

    std::cout << '\n';
    std::cout << "Some text!!!";

    return 0;
}
