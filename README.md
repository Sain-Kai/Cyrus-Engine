# 🚀 Cyrus Engine
*A 2D to 3D Game Engine built from scratch in C++ and OpenGL*

![Cyrus Engine Banner](https://github.com/Sain-Kai/Cyrus-Engine/assets/your-banner-placeholder)


[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Build](https://img.shields.io/badge/build-passing-brightgreen)]()
[![C++](https://img.shields.io/badge/C%2B%2B-17-blue)]()
[![OpenGL](https://img.shields.io/badge/OpenGL-Graphics-red)]()

---

## 📖 Overview
Cyrus Engine is a **scalable game engine** designed to evolve from a simple 2D framework into a fully functional **3D engine**.  
The project emphasizes **performance, modularity, and learning**, giving developers a deep dive into how engines are built from scratch.

**Core features include:**
- Real-time rendering (2D & 3D)
- Entity-Component-System (ECS) framework
- Input handling (keyboard/mouse)
- Scene management with cameras & lighting
- Asset loaders (textures & models)
- AI and NLP integration roadmap

---

## 🛠️ Technology Stack
- **Language:** C++17+
- **Build System:** CMake
- **Graphics:** OpenGL, GLFW, GLAD
- **Math:** GLM
- **Assets:** stb_image, Assimp
- **Debugging:** gdb, Visual Studio Debugger
- **Future AI Integration:** TensorFlow Lite, ONNX, OpenCV

---

## 📌 Roadmap

### Phase Progression (from 2D → 3D)
1. **Core Systems (Weeks 1–5)**  
   - Game loop, windowing, input handling  
   - 2D rendering pipeline  

2. **Entity-Component-System + Scene Graph (Weeks 6–7)**  
   - ECS framework for modular design  
   - Scene hierarchy with transforms  

3. **Asset Management (Week 8)**  
   - Texture loading (stb_image)  
   - Model loading (Assimp)  

4. **3D Rendering (Weeks 9–10)**  
   - Cameras (orthographic + perspective)  
   - Lighting (directional, material-based)  
   - Shaders  

5. **Final Polish & Demo (Week 11)**  
   - Showcases:  
     - 2D platformer  
     - 3D scene viewer  
     - Hybrid 2D/3D demo  

---

## 📅 Learning Roadmap

### Weekly Plan (10-Week Build)
- **Week 1–2:** C++ fundamentals, OOP, memory management, project setup with CMake  
- **Week 3:** 3D math foundations (vectors, matrices, quaternions)  
- **Week 4–5:** Windowing (GLFW), OpenGL setup, draw first triangle  
- **Week 6:** Camera system with view/projection matrices  
- **Week 7:** Input handling & event system  
- **Week 8:** ECS & scene graph  
- **Week 9:** Resource management (textures, models)  
- **Week 10:** Basic lighting & materials  

### Extended 6-Month Plan
- **Month 1–2:** Core loop, input, windowing  
- **Month 3:** Rendering pipeline (2D → OpenGL basics)  
- **Month 4:** ECS + scene management  
- **Month 5:** Scripting (Lua), audio (OpenAL/SDL_mixer)  
- **Month 6:** Debug UI (ImGui), profiling, scene editor  

---

## 🤖 Future Scope: AI Integration
Cyrus Engine aims to merge **real-time rendering with intelligence**. Planned features include:

- **Gameplay AI:**  
  - NPC behavior trees, reinforcement learning agents  
  - Pathfinding (A*, Dijkstra, ML-based navigation)  

- **Procedural Generation:**  
  - AI-driven levels, textures, quest/story generation  

- **Performance Optimization:**  
  - AI-based Level of Detail (LOD)  
  - Frame rate prediction & dynamic scaling  

- **Computer Vision & NLP:**  
  - Gesture-based input (OpenCV)  
  - Voice commands for player interaction  
  - Dynamic NPC conversations with LLMs  

- **Developer AI Tools:**  
  - Auto physics & lighting suggestions  
  - AI-assisted debugging & testing  

---

## 🧪 Testing Strategy
- Unit tests (math, ECS, resource loaders)  
- Visual validation for rendering  
- Debug overlays (input, FPS, memory)  
- Automated AI-driven bot testing  

---

## 📂 Project Structure (Planned)
/CyrusEngine
├── Core/ # Application, Game Loop, Window, Input
├── Graphics/ # Renderer, Shaders, Camera, Lighting
├── Math/ # Vectors, Matrices, Quaternions (GLM wrapper)
├── ECS/ # Entities, Components, Systems
├── Assets/ # Resource loaders (stb_image, Assimp)
├── Scripts/ # Lua integration (future)
├── Audio/ # OpenAL / SDL_mixer (future)
├── Tools/ # Debug UI, Profiling, Scene Editor
└── Examples/ # Demo projects (2D platformer, 3D scene viewer)



---

## 🎮 Showcase Ideas
- **2D Platformer Demo** (early build)  
- **3D Scene Viewer** (assets + lighting)  
- **Hybrid 2D/3D demo** (final milestone)  

---

## 🤝 Contributing
Contributions are welcome!  
- Fork the repo  
- Create a feature branch  
- Submit a pull request with documentation  

---

## 📜 License
MIT License — free to use, modify, and distribute.

---

## 🌟 Vision
Cyrus Engine’s mission is to **merge rendering with intelligence**, creating **adaptive, immersive, and intuitive** gameplay experiences.  
It is both a **learning project** for engine developers and a **foundation for AI-powered games of the future**.
