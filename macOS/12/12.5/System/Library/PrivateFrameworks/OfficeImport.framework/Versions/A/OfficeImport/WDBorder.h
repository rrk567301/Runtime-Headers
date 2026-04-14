@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)style;
- (void)setWidth:(unsigned char)a0;
- (unsigned char)width;
- (void)setStyle:(int)a0;
- (BOOL)frame;
- (unsigned char)space;
- (void)setFrame:(BOOL)a0;
- (id)color;
- (void)setColor:(id)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)shadow;
- (void)setShadow:(BOOL)a0;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
