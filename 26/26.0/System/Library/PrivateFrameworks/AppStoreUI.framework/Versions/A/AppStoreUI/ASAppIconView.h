@class NSImageView, ASCustomShapeShadow;

@interface ASAppIconView : NSImageView {
    NSImageView *_imageView;
    ASCustomShapeShadow *_customShapeShadow;
}

- (void)setImage:(id)a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (void).cxx_destruct;
- (void)_configureConstraints;

@end
