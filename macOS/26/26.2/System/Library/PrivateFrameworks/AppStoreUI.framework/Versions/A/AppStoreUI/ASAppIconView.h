@class NSImageView, ASCustomShapeShadow;

@interface ASAppIconView : NSImageView {
    NSImageView *_imageView;
    ASCustomShapeShadow *_customShapeShadow;
}

- (void)setImage:(id)a0;
- (void)layout;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)init;
- (void)_configureConstraints;

@end
