#pragma once

namespace Cyrus{
    void initEngine();
    void log(const char* message, int level = 0);
    void shutdownEngine();
    void loadConfiguration(const char* filepath);
    float getDeltaTime();
    void handleEvents();
}