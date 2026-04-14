@interface CASDFOutputEffect : CASDFEffect

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;

+ (id)defaultValues;
+ (id)name;
+ (id)CA_attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
