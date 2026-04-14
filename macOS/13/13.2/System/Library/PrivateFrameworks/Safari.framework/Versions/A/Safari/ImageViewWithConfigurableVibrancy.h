@interface ImageViewWithConfigurableVibrancy : NSImageView {
    BOOL _allowsVibrancy;
}

- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)setAllowsVibrancy:(BOOL)a0;

@end
