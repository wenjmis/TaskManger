# 🗂️ TaskManager

一個簡單的 C++ 任務管理系統，具備新增、列出與完成任務的功能。此專案設計目的是作為 C++ OOP（物件導向）實作練習，適合作為履歷作品或學習範例。

---

## 🚀 功能 Features

- ✅ 建立任務（包含標題與描述）
- 📋 列出所有任務
- ☑️ 標記任務為完成
- 🧹 管理多個任務的清單

---

## 🛠 使用技術與工具

- C++17
- 標準函式庫：`<vector>`, `<string>`, `<iostream>`
- 編譯器：g++（建議使用 MinGW on Windows）
- 編輯器：Visual Studio Code

---

## 🗃 專案結構

📁 TaskManager/  
├── main.cpp              // 程式進入點  
├── Task.hpp              // Task 類別定義（介面）  
├── Task.cpp              // Task 類別實作  
├── TaskManager.hpp       // TaskManager 類別定義（介面）  
├── TaskManager.cpp       // TaskManager 類別實作  
└── .vscode/              // VS Code 設定（tasks.json, launch.json, c_cpp_properties.json）



---


---

## ⚙️ 編譯與執行

### 方式一：使用 VS Code 任務自動建置（推薦）

1. 按 `Ctrl + Shift + B` 進行建置
2. 按 `F5` 開始執行（需安裝 `C++` 擴充與 gdb）

### 方式二：手動使用 g++ 編譯

```bash
g++ main.cpp Task.cpp TaskManager.cpp -o main.exe
./main.exe
