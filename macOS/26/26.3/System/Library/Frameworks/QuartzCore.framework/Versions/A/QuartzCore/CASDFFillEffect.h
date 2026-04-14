@interface CASDFFillEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *color;

+ (id)defaultValues;
+ (id)name;
+ (id)CA_attributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
