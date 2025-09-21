@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;

+ (id)blackColor;
+ (id)lightGrayColor;
+ (id)whiteColor;
+ (id)darkSecondaryLabelColor;
+ (id)lightSecondaryLabelColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithR:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;

@end
