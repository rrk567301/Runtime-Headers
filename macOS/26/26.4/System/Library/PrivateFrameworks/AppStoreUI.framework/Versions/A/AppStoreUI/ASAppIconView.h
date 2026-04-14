@class NSImageView, ASCustomShapeShadow;

@interface ASAppIconView : NSImageView {
    NSImageView *_imageView;
    ASCustomShapeShadow *_customShapeShadow;
}

- (void)layout;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isFlipped;
- (void)_configureConstraints;

@end
