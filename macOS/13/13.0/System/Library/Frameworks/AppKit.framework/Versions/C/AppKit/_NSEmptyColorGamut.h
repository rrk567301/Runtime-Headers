@interface _NSEmptyColorGamut : NSColorGamut

+ (void)initialize;
+ (id)emptyGamut;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (double)volume;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (BOOL)isEqualToGamut:(id)a0;
- (BOOL)isInfinite;
- (BOOL)containsGamut:(id)a0;
- (BOOL)intersectsGamut:(id)a0;
- (id)unionWithGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;

@end
