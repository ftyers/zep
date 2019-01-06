#pragma once

#include "splits.h"

namespace Zep
{
class ZepTheme;
class IZepDisplay;

struct Scroller
{
    float vScrollVisiblePercent = 1.0f;
    float vScrollPosition = 0.0f;
    bool vertical = true;

    std::shared_ptr<Region> region;
    std::shared_ptr<Region> topButtonRegion;
    std::shared_ptr<Region> bottomButtonRegion;
    std::shared_ptr<Region> mainRegion;
};

void Scroller_Init(Scroller& scroller, Region& parent);
void Scroller_Display(Scroller& scroller, IZepDisplay& display, ZepTheme& theme);

};
