@interface NSColorGamut : NSObject <NSCopying>

@property (readonly, getter=isEmpty) char empty;
@property (readonly, getter=isInfinite) char infinite;
@property (readonly) double volume;

+ (void)initialize;
+ (id)emptyGamut;
+ (id)gamutWithCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)infiniteGamut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)unionWithGamut:(id)a0;
- (char)isEqualToGamut:(id)a0;
- (char)containsCGColor:(struct CGColor { } *)a0;
- (char)containsGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;
- (char)intersectsGamut:(id)a0;

@end
