@interface NSColorGamut : NSObject <NSCopying>

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, getter=isInfinite) BOOL infinite;
@property (readonly) double volume;

+ (void)initialize;
+ (id)gamutWithCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)infiniteGamut;
+ (id)emptyGamut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)intersectionWithGamut:(id)a0;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (BOOL)isEqualToGamut:(id)a0;
- (BOOL)containsGamut:(id)a0;
- (BOOL)intersectsGamut:(id)a0;
- (id)unionWithGamut:(id)a0;

@end
