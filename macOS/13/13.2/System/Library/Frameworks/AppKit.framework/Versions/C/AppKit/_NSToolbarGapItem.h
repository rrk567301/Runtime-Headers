@class NSToolbarItem;

@interface _NSToolbarGapItem : NSToolbarItem {
    BOOL _isSpace;
    BOOL _isNavigational;
    NSToolbarItem *_proxiedToolbarItem;
}

- (BOOL)isNavigational;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;
- (BOOL)isSpace;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (void)configureAsProxyForItem:(id)a0 usingMetrics:(const struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } x1; } *)a1;
- (id)proxiedToolbarItem;

@end
