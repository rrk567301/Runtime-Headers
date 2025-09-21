@interface ImageViewWithConfigurableVibrancy : NSImageView {
    char _allowsVibrancy;
}

- (char)allowsVibrancy;
- (void)setAllowsVibrancy:(char)a0;
- (char)wantsUpdateLayer;

@end
