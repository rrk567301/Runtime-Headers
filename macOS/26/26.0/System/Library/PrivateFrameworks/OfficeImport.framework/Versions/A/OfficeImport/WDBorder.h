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
- (void)setFrame:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shadow;
- (id)color;
- (unsigned char)width;
- (id)init;
- (BOOL)frame;
- (id)description;
- (void)setStyle:(int)a0;
- (int)style;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
