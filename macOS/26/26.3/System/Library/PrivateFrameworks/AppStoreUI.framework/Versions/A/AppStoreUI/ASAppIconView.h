@class NSImageView, ASCustomShapeShadow;

@interface ASAppIconView : NSImageView {
    NSImageView *_imageView;
    ASCustomShapeShadow *_customShapeShadow;
}

- (BOOL)isFlipped;
- (void)layout;
- (id)init;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)_configureConstraints;

@end
