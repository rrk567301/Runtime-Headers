@interface LUI2ScrollViewWithOverlayScrollers : NSScrollView

@property (class) char allowResponsiveScrolling;

+ (char)isCompatibleWithResponsiveScrolling;

- (void)setScrollerStyle:(long long)a0;

@end
