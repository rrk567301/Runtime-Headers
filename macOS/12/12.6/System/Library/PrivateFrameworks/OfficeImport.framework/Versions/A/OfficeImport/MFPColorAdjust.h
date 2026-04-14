@class NSDictionary, OITSUColor;

@interface MFPColorAdjust : NSObject {
    struct MFPColorMatrix { float x0[5][5]; } *mColorMatrix;
    struct MFPColorMatrix { float x0[5][5]; } *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (float)threshold;
- (float)gamma;
- (void)setThreshold:(float)a0;
- (struct MFPColorMatrix { float x0[5][5]; } *)colorMatrix;
- (void)setColorMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (struct MFPColorMatrix { float x0[5][5]; } *)grayMatrix;
- (void)setGrayMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (int)colorMatrixFlags;
- (void)setColorMatrixFlags:(int)a0;
- (id)transparentLow;
- (id)transparentHigh;
- (void)setTransparentLow:(id)a0 high:(id)a1;
- (void)setGamma:(float)a0;
- (id)recolorMap;
- (void)setRecolorMap:(id)a0;

@end
