#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include <iostream>

class IInputManager {
public:
    virtual void TestFunction() const = 0;
    ~IInputManager() = default;
};

class InputManager_Text : public IInputManager {
public:
    void TestFunction() const override;
};

#endif // INPUTMANAGER_H