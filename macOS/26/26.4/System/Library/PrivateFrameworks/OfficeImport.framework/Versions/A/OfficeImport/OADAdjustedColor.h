@class OADColor;

@interface OADAdjustedColor : OADColor {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}

- (BOOL)invert;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)baseColor;
- (int)adjustmentType;
- (unsigned char)adjustmentParam;
- (BOOL)gray;
- (id)initWithBaseColor:(id)a0 adjustmentType:(int)a1 adjustmentParam:(unsigned char)a2 invert:(BOOL)a3 invert128:(BOOL)a4 gray:(BOOL)a5;
- (BOOL)invert128;

@end
