@interface CASDFGlassDisplacementEffect : CASDFEffect

@property (nonatomic) double height;
@property (nonatomic) double curvature;
@property (nonatomic) double angle;
@property (nonatomic) double maskOffset;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
