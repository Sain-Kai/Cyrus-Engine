# Cyrus Engine: 2D to 3D Game Engine from Scratch in C++

---

![Cyrus Engine Banner](assets/cyrus-banner.png)

## Overview
**Cyrus Engine** is a learning-driven, scalable game engine written in **C++ and OpenGL**, evolving from a **2D engine** into a fully functional **3D engine**.  

It provides a foundation for:
- Real-time rendering (2D → 3D)  
- Entity-Component-System (ECS) architecture  
- Scene and asset management  
- Input and camera systems  
- AI/NLP integration for intelligent gameplay  

The project is intended for **students, hobbyists, and researchers** who want to learn how game engines work at their core.

---

## Installation

Clone the repository and build with **CMake**:

```bash
git clone https://github.com/Sain-Kai/Cyrus-Engine.git
cd Cyrus-Engine
mkdir build && cd build
cmake ..
make
```

Dependencies:  
- C++17 or newer  
- OpenGL, GLFW, GLAD  
- GLM (math library)  
- stb_image, Assimp (asset loading)  

---

## Usage

Basic example (creating a window and running the engine loop):

```cpp
#include "Core/Application.h"

int main() {
    Cyrus::Application app;
    app.Run();
    return 0;
}
```

Expected Output:  
A resizable window with the engine loop running, ready to handle input and rendering.

---

## Roadmap

### Phase Plan (11 Weeks)
1. **Core Systems:** Game loop, input, 2D rendering  
2. **ECS + Scene Graph**  
3. **Asset Management** (textures, models)  
4. **3D Rendering:** Camera, lighting, shaders  
5. **Final Polish & Demo**

### Extended 6-Month Plan
- **Windowing, Input, FPS counter**  
- **Rendering pipeline (2D → OpenGL basics)**  
- **ECS + scene management**  
- **Lua scripting + Audio (OpenAL/SDL_mixer)**  
- **Debug UI with ImGui + Scene Editor**  

---

## Future Scope: AI & NLP Integration
- NPC AI (behavior trees, pathfinding, reinforcement learning)  
- Procedural content generation (levels, textures, quests)  
- AI-based performance optimization (LOD, frame prediction)  
- Computer Vision (gesture-based input, AR)  
- NLP-driven gameplay (voice commands, dynamic NPC conversations)  
- AI-assisted debugging & development tools  

---

## Testing
- ✅ Unit tests (math library, ECS, asset loaders)  
- ✅ Visual rendering validation  
- ✅ Debug overlays (input, FPS, memory usage)  
- ✅ AI bot testing for automated gameplay validation  

---

## Project Structure
```
/CyrusEngine
 ├── Core/       # Game loop, input, windowing
 ├── Graphics/   # Renderer, shaders, camera, lighting
 ├── Math/       # Vectors, matrices, quaternions
 ├── ECS/        # Entities, components, systems
 ├── Assets/     # Resource loaders (stb_image, Assimp)
 ├── Scripts/    # Lua integration (future)
 ├── Audio/      # OpenAL / SDL_mixer (future)
 ├── Tools/      # Debug UI, profiling, scene editor
 └── Examples/   # Demo projects
```

---

## Citation
If you use **Cyrus Engine** in research, demos, or tutorials, please cite or link back to the repository:  

```bibtex
@software{cyrus_engine2025,
  author = {Kai, Sain},
  title = {Cyrus Engine: 2D to 3D Game Engine in C++},
  year = {2025},
  url = {https://github.com/Sain-Kai/Cyrus-Engine}
}
```

---

## Contact
- GitHub: [Sain-Kai](https://github.com/Sain-Kai)  
- Issues & Discussions: [Open on GitHub](https://github.com/Sain-Kai/Cyrus-Engine/issues)  

---

## License
This project is licensed under the **MIT License** — free to use, modify, and distribute.

---

## Acknowledgements
- LearnOpenGL tutorials  
- Assimp & stb_image communities  
- Contributors and testers  
- Future AI integration ideas inspired by ML/LLM research  

---

## Vision
**Cyrus Engine** merges **rendering** with **intelligence**, aiming to become a **next-generation, modular, and adaptive game engine** for immersive experiences.
