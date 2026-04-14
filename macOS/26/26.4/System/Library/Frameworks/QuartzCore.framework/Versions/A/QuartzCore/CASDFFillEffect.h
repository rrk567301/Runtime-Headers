@interface CASDFFillEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *color;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
