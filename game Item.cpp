//
//  game Item.cpp
//  Assignment_1_COMP345
//
//  Created by oscar on 2016-10-26.
//  Copyright © 2016 oscar. All rights reserved.
//

#include "game Item.hpp"

gameItem::gameItem(){
}
gameItem::gameItem(SDL_Renderer *renderer,SDL_Rect srcrect,
                   SDL_Rect dstrect,string address){
    this->dstrect=dstrect;
    this->srcrect=srcrect;
    this->image = IMG_Load(address.c_str());
    this->texture=SDL_CreateTextureFromSurface(renderer, this->image);
}
