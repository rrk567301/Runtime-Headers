@interface PhotosUIPrivate.PUVFXDimmingBackgroundLayer : PhotosUIPrivate.PUVFXLayer {
    void /* unknown type, empty encoding */ $__lazy_storage_$_foregroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dimmingLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sourceImageLayer;
    void /* unknown type, empty encoding */ blendAnimationDuration;
    void /* unknown type, empty encoding */ scannerLayer;
    void /* unknown type, empty encoding */ currentBackground;
    void /* unknown type, empty encoding */ blendAnimation;
    void /* unknown type, empty encoding */ blendImages;
}

@property (nonatomic) BOOL isThrottled;
@property (nonatomic) BOOL isDimmed;
@property (nonatomic, retain) struct CGImage { } *foregroundMask;
@property (nonatomic, retain) struct CGImage { } *backgroundMask;
@property (nonatomic, retain) struct CGImage { } *sourceImage;

- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)initialScan;
- (void)resetMask;
- (void)scanFrom:(struct CGPoint { double x0; double x1; })a0;
- (void)setBackgroundImage:(id)a0 ctx:(id)a1 format:(int)a2 colorSpace:(struct CGColorSpace { } *)a3;
- (void)setBlendImages:(id)a0 ctx:(id)a1 format:(int)a2 colorSpace:(struct CGColorSpace { } *)a3;
- (void)setForegroundImage:(id)a0 ctx:(id)a1 format:(int)a2 colorSpace:(struct CGColorSpace { } *)a3;

@end
