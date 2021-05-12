#pragma once

#include <cstddef>
#include <vector>

#include "loaders/level_loader.hpp"
#include "game_manager/imported/event_controller/i_controller.h"
#include "game_manager/imported/graphics/i_drawable.h"

namespace game {

class Game {
  public:
    explicit Game(event_controller::IController &controller
                  , graphics::ICanvas &canvas) {}

    void stop_game(event_controller::IController &controller) const {}

    void continue_game(event_controller::IController &controller) const {}
};

}  // namespace game
