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
- (void)setColor:(id)a0;
- (id)description;
- (id)init;
- (id)color;
- (int)style;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)frame;
- (BOOL)shadow;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setFrame:(BOOL)a0;
- (void)setWidth:(unsigned char)a0;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (unsigned char)space;
- (void)setBorder:(id)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
