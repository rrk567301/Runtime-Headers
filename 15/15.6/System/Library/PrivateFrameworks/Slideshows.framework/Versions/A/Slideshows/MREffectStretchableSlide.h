@interface MREffectStretchableSlide : MREffect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mSpriteInnerRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mImageInnerRect;
    char mDontDrawInner;
}

- (void)setAttributes:(id)a0;
- (char)isOpaque;
- (char)isNative3D;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
