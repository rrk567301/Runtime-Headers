@interface TLKPassThroughScrollView : NUIContentScrollView {
    BOOL _horizontalScrollingDisabled;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)scrollWheel:(id)a0;
- (BOOL)drawsBackground;
- (void)setHorizontalScrollingDisabled:(BOOL)a0;

@end
