add_sources(
    "${CMAKE_CURRENT_SOURCE_DIR}/camera_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/camera_system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/colour_material.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/colour_material.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/keyboard.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/keyboard.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/light_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/light_system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/mouse.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/mouse.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/render_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/render_system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/scene_node_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/scene_node_system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/sky_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/sky_system.h"
)

  add_sources(
    "${CMAKE_CURRENT_SOURCE_DIR}/workspace_system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/workspace_system.cpp"
    )

add_test_sources(
    "${CMAKE_CURRENT_SOURCE_DIR}/tests/script_bindings.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/tests/sky_system.cpp"
)
