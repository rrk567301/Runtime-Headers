@interface _NSInfiniteColorGamut : NSColorGamut

+ (void)initialize;
+ (id)infiniteGamut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEmpty;
- (id)unionWithGamut:(id)a0;
- (char)isEqualToGamut:(id)a0;
- (char)containsCGColor:(struct CGColor { } *)a0;
- (char)containsGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;
- (char)intersectsGamut:(id)a0;
- (char)isInfinite;
- (double)volume;

@end
