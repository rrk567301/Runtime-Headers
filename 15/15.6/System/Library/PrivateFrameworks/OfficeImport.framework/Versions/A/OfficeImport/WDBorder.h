@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    char mShadow;
    char mFrame;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)style;
- (void)setWidth:(unsigned char)a0;
- (unsigned char)width;
- (void)setStyle:(int)a0;
- (id)color;
- (void)setColor:(id)a0;
- (char)frame;
- (void)setFrame:(char)a0;
- (void)setShadow:(char)a0;
- (void)setSpace:(unsigned char)a0;
- (char)shadow;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (char)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
