# Spécifier le chemin de vcpkg pour le toolchain
set(CMAKE_TOOLCHAIN_FILE "C:/Users/hp/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Spécifier les versions minimales et le projet
cmake_minimum_required(VERSION 3.10)
project(DeribitOrderManagement)

# Spécifier la version du C++ standard
set(CMAKE_CXX_STANDARD 17)

# Trouver les packages nécessaires
find_package(CURL REQUIRED)
find_package(websocketpp CONFIG REQUIRED)
find_package(Boost REQUIRED)

# Ajouter l'exécutable et spécifier les fichiers sources
add_executable(Deribit_Management_System 
    src/main.cpp
    src/order_manager.cpp
    src/websocket_server.cpp
    src/utilities.cpp
)

# Inclure les répertoires nécessaires
target_include_directories(Deribit_Management_System PRIVATE include)

# Lier les bibliothèques nécessaires
target_link_libraries(Deribit_Management_System PRIVATE CURL::libcurl)
target_link_libraries(Deribit_Management_System PRIVATE websocketpp::websocketpp)
