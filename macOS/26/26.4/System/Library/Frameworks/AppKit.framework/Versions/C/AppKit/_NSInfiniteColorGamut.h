@interface _NSInfiniteColorGamut : NSColorGamut

+ (void)initialize;
+ (id)infiniteGamut;

- (double)volume;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToGamut:(id)a0;
- (id)unionWithGamut:(id)a0;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (BOOL)containsGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;
- (BOOL)intersectsGamut:(id)a0;
- (BOOL)isInfinite;

@end
