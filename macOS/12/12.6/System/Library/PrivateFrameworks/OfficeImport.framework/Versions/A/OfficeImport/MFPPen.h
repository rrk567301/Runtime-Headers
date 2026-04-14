@class MFPCustomLineCap, MFPBrush;

@interface MFPPen : NSObject {
    MFPBrush *mBrush;
    float mWidth;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float *mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float *mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(int)a0;
- (void)setWidth:(float)a0;
- (float)width;
- (int)alignment;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (float)miterLimit;
- (void)setMiterLimit:(float)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setLineJoin:(int)a0;
- (int)lineJoin;
- (void)strokePath:(id)a0;
- (void)setStartCap:(int)a0;
- (void)setEndCap:(int)a0;
- (void)setDashStyle:(int)a0;
- (void)setDashCap:(int)a0;
- (void)setDashOffset:(float)a0;
- (void)setDashPattern:(const float *)a0 count:(int)a1;
- (void)setCompoundArray:(const float *)a0 count:(int)a1;
- (void)setBrush:(id)a0;
- (void)setDashPattern:(const float *)a0 count:(int)a1 toPath:(id)a2;
- (void)applyLineCapToPath:(id)a0;
- (void)applyDashCapToPath:(id)a0;
- (void)applyLineJoinToPath:(id)a0;
- (void)applyDashPatternToPath:(id)a0;
- (id)brush;
- (int)startCap;
- (int)endCap;
- (int)dashStyle;
- (int)dashCap;
- (float)dashOffset;
- (int)dashPatternCount;
- (const float *)dashPattern;
- (int)compoundArrayCount;
- (const float *)compoundArray;
- (id)customStartCap;
- (void)setCustomStartCap:(id)a0;
- (id)customEndCap;
- (void)setCustomEndCap:(id)a0;

@end
