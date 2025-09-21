@interface CASDFShadowEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *color;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) BOOL punchout;
@property (nonatomic) BOOL invert;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
