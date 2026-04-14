@interface NSBlock : NSObject <NSCopying>

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)invoke;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)performAfterDelay:(double)a0;

@end
