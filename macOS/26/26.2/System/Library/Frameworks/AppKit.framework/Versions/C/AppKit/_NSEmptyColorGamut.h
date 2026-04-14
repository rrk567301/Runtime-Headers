@interface _NSEmptyColorGamut : NSColorGamut

+ (void)initialize;
+ (id)emptyGamut;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)volume;
- (BOOL)isEmpty;
- (BOOL)isEqualToGamut:(id)a0;
- (id)unionWithGamut:(id)a0;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (BOOL)containsGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;
- (BOOL)intersectsGamut:(id)a0;
- (BOOL)isInfinite;

@end
