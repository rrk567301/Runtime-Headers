@class NSToolbarItem;

@interface _NSGapToolbarItem : NSToolbarItem {
    NSToolbarItem *_proxiedToolbarItem;
}

+ (id)gapItemWithItemIdentifier:(id)a0 proxyItem:(id)a1 usingMetrics:(const struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; } x1; } *)a2;

- (void).cxx_destruct;
- (BOOL)isSpace;
- (BOOL)isBordered;
- (BOOL)isGapItem;
- (BOOL)isNavigational;
- (id)proxiedToolbarItem;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;

@end
