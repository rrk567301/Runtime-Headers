@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (BOOL)shadow;
- (void)setWidth:(unsigned char)a0;
- (BOOL)frame;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyle:(int)a0;
- (int)style;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (unsigned long long)hash;
- (id)init;
- (void)setFrame:(BOOL)a0;
- (id)description;
- (unsigned char)width;
- (void)setColor:(id)a0;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
