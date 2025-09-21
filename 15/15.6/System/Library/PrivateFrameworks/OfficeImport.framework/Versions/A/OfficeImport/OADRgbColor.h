@interface OADRgbColor : OADColor {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)black;
+ (id)white;
+ (id)rgbColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)rgbColorWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
+ (id)rgbColorWithTSUColor:(id)a0;
+ (id)rgbColorWithWhite:(float)a0;
+ (id)rgbColorWithWhiteByte:(float)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (float)red;
- (float)blue;
- (float)green;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (char)isBlack;
- (char)isWhite;
- (unsigned char)redByte;
- (unsigned char)blueByte;
- (unsigned char)greenByte;
- (id)initWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
- (id)initWithWhite:(float)a0;
- (id)initWithWhiteByte:(float)a0;
- (id)rgbColorWithFraction:(float)a0 ofRgbColor:(id)a1;

@end
