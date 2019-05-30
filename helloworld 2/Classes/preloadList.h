#ifndef __PRELOAD_LIST_H__
#define __PRELOAD_LIST_H__

#include <array>

namespace Preload
{
    const std::array<std::string, 5> plists = {
        "GameItem/Heros/DJ/animation.plist",
        "GameItem/Heros/HY/animation.plist",
        "GameItem/Heros/YS/animation.plist",
        //三个英雄帧动画
        
        "GameItem/Blue/ShortRangeSoldier/animation.plist",
        "GameItem/Red/ShortRangeSoldier/animation.plist",
        // 红蓝双方短程兵
        
        "GameItem/Blue/LongRangeSoldier/animation.plist",
        "GameItem/Red/LongRangeSoldier/animation.plist",
        //红蓝双方远程兵
        
        "GameItem/Blue/GunCar/animation.plist",
        "GameItem/Red/GunCar/animation.plist"
        //红蓝双方炮车
        
        //考虑 防御塔 水晶需要在加载时缓冲？
    };
}

#endif // !__PRELOAD_LIST_H__

