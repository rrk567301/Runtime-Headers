@class NSImageView, ASCustomShapeShadow;

@interface ASAppIconView : NSImageView {
    NSImageView *_imageView;
    ASCustomShapeShadow *_customShapeShadow;
}

- (void)layout;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)init;
- (void)_configureConstraints;

@end
