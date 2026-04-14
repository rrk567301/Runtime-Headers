@interface CUIVectorGlyphManagedPointArray : NSObject <NSCopying>

@property (readonly, nonatomic) struct { double *pointComponents; unsigned long long numPoints; } rawArray;

+ (id)createManagedPointArrayWrapping:(struct { double *x0; unsigned long long x1; })a0;
+ (id)createWithPointCount:(unsigned long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
