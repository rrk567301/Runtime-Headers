@interface NSBlock : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)invoke;
- (void)performAfterDelay:(double)a0;

@end
