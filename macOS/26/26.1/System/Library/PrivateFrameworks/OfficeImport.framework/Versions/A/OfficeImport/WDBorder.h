@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (void)setWidth:(unsigned char)a0;
- (BOOL)frame;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)setFrame:(BOOL)a0;
- (void)setStyle:(int)a0;
- (int)style;
- (id)color;
- (id)description;
- (void).cxx_destruct;
- (BOOL)shadow;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)width;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
