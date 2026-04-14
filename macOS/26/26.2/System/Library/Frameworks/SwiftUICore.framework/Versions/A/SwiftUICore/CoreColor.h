@interface CoreColor : NSObject {
    struct CGColor { } *_color;
}

+ (id)blackColorWithSystem:(unsigned char)a0;
+ (id)colorWithSystem:(unsigned char)a0 cgColor:(struct CGColor { } *)a1;
+ (id)systemBlueColorWithSystem:(unsigned char)a0;
+ (id)systemBrownColorWithSystem:(unsigned char)a0;
+ (id)systemCyanColorWithSystem:(unsigned char)a0;
+ (id)systemGrayColorWithSystem:(unsigned char)a0;
+ (id)systemGreenColorWithSystem:(unsigned char)a0;
+ (id)systemIndigoColorWithSystem:(unsigned char)a0;
+ (id)systemMintColorWithSystem:(unsigned char)a0;
+ (id)systemOrangeColorWithSystem:(unsigned char)a0;
+ (id)systemPinkColorWithSystem:(unsigned char)a0;
+ (id)systemPurpleColorWithSystem:(unsigned char)a0;
+ (id)systemRedColorWithSystem:(unsigned char)a0;
+ (id)systemTealColorWithSystem:(unsigned char)a0;
+ (id)systemYellowColorWithSystem:(unsigned char)a0;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (void)dealloc;

@end
