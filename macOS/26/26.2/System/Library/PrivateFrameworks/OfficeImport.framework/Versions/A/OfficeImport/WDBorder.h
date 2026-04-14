@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (void)setStyle:(int)a0;
- (unsigned char)width;
- (unsigned long long)hash;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWidth:(unsigned char)a0;
- (BOOL)shadow;
- (void).cxx_destruct;
- (id)description;
- (int)style;
- (void)setFrame:(BOOL)a0;
- (BOOL)frame;
- (id)init;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
