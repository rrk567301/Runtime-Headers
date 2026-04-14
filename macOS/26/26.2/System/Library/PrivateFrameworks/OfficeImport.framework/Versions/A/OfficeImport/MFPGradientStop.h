@class OITSUColor;

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}

- (id)color;
- (void).cxx_destruct;
- (float)position;
- (id)initWithColor:(id)a0 position:(float)a1;

@end
