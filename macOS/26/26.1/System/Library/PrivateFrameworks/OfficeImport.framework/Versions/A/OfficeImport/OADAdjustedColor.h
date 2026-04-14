@class OADColor;

@interface OADAdjustedColor : OADColor {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)invert;
- (BOOL)isEqual:(id)a0;
- (id)baseColor;
- (int)adjustmentType;
- (unsigned char)adjustmentParam;
- (BOOL)gray;
- (id)initWithBaseColor:(id)a0 adjustmentType:(int)a1 adjustmentParam:(unsigned char)a2 invert:(BOOL)a3 invert128:(BOOL)a4 gray:(BOOL)a5;
- (BOOL)invert128;

@end
