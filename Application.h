
#ifndef APPLICATION_H
#define APPLICATION_H

class Application {
    int m_counter;
    public:
        Application();
        void setup();
        void loop();
        const int counter();
};

#endif