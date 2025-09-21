@class OADColor;

@interface OADAdjustedColor : OADColor {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    char mInvert;
    char mInvert128;
    char mGray;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)invert;
- (id)baseColor;
- (int)adjustmentType;
- (unsigned char)adjustmentParam;
- (char)gray;
- (id)initWithBaseColor:(id)a0 adjustmentType:(int)a1 adjustmentParam:(unsigned char)a2 invert:(char)a3 invert128:(char)a4 gray:(char)a5;
- (char)invert128;

@end
