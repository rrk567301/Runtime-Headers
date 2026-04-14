@interface CASDFOutputEffect : CASDFEffect

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
