@interface CASDFGradientContourEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *startColor;
@property (retain, nonatomic) struct CGColor { } *endColor;
@property (nonatomic) double angle;
@property (nonatomic) double radius;
@property (nonatomic) double shadowEffectOffset;
@property (nonatomic) double shadowGradientStart;
@property (nonatomic) double shadowGradientEnd;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double gradientOffset;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
