@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)style;
- (void)setWidth:(unsigned char)a0;
- (unsigned char)width;
- (void)setStyle:(int)a0;
- (id)color;
- (void)setColor:(id)a0;
- (void)setFrame:(BOOL)a0;
- (BOOL)frame;
- (unsigned char)space;
- (void)setSpace:(unsigned char)a0;
- (void)setShadow:(BOOL)a0;
- (BOOL)shadow;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
