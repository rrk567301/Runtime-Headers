@interface CASDFGlassHighlightEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *color;
@property (nonatomic) double height;
@property (nonatomic) double angle;
@property (nonatomic) double spread;
@property (nonatomic) double amount;
@property (nonatomic) double curvature;
@property (nonatomic) BOOL global;

+ (id)defaultValues;
+ (id)name;
+ (id)CA_attributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
