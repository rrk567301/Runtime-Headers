@class NSArray;

@interface MFPGradientBrush : MFPBrush {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
}

- (id)init;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)color;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fillPath:(id)a0;
- (id)endColor;
- (id)startColor;
- (id)colorAtPosition:(float)a0;
- (void)createPhoneBrush;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (void)createStopsFromStartAndEndColors;
- (void)setBlend:(id)a0;
- (void)setColorBlend:(id)a0;
- (void)setWrapMode:(int)a0;

@end
