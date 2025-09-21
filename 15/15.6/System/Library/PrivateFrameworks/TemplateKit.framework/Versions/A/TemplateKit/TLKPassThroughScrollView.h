@interface TLKPassThroughScrollView : NUIContentScrollView {
    char _horizontalScrollingDisabled;
}

+ (char)isCompatibleWithResponsiveScrolling;

- (char)drawsBackground;
- (void)scrollWheel:(id)a0;
- (void)setHorizontalScrollingDisabled:(char)a0;

@end
