@interface MREffectStretchableSlide : MREffect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mSpriteInnerRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mImageInnerRect;
    BOOL mDontDrawInner;
}

- (BOOL)isOpaque;
- (void)setAttributes:(id)a0;
- (BOOL)isNative3D;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
