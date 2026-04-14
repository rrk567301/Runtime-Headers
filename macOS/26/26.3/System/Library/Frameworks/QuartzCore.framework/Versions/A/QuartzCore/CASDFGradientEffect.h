@class NSArray;

@interface CASDFGradientEffect : CASDFEffect

@property (copy) NSArray *colors;
@property (copy) NSArray *distances;
@property (copy) NSArray *interpolations;
@property BOOL premultiplied;

+ (id)defaultValues;
+ (id)name;
+ (id)CA_attributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
