@interface NSBlock : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)invoke;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)copy;
- (void)performAfterDelay:(double)a0;

@end
