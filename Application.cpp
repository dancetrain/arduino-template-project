#include "Application.h"
#include "Macros.h"
#include "Config.h"

Application::Application() {
    m_counter = 0;
}

void Application::setup() {
    m_counter = 0;
}

void Application::loop() {
    ++m_counter;
    DEBUG("Loop %d", &m_counter)
}

const int Application::counter() {
    return m_counter;
}