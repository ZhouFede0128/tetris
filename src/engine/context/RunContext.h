#ifndef RUNCONTEXT_H
#define RUNCONTEXT_H

class Scene;

typedef enum keyboard
{
    NONE,
    LEFT,
    RIGHT,
    UP,
    DOWN,
    CONFIRM,
} Keyboard;

class RunContext
{
private:
    Keyboard input;
    Scene* switchScene;
    bool exit;

public:
    RunContext();
    ~RunContext();
    void setInput(Keyboard input);
    [[nodiscard]] Keyboard getInput() const;
    void queueScene(Scene* scene);
    void queueExit();
    [[nodiscard]] bool sceneQueued() const;
    [[nodiscard]] bool exitQueued() const;
    [[nodiscard]] Scene* newScene() const;
};

#endif
