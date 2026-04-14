@interface OADRgbColor : OADColor {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)black;
+ (id)white;
+ (id)rgbColorWithTSUColor:(id)a0;
+ (id)rgbColorWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
+ (id)rgbColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)rgbColorWithWhite:(float)a0;
+ (id)rgbColorWithWhiteByte:(float)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)red;
- (float)green;
- (float)blue;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (BOOL)isBlack;
- (id)initWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
- (unsigned char)redByte;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithWhite:(float)a0;
- (id)initWithWhiteByte:(float)a0;
- (id)rgbColorWithFraction:(float)a0 ofRgbColor:(id)a1;
- (BOOL)isWhite;

@end
