//
// Created by Zack on 10/6/2024.
//

#ifndef CONTROLLER_H
  #define CONTROLLER_H

    class Controller {
    public:
      Controller getController() const;

    private:
      static void initializeController();
    };

#endif //CONTROLLER_H