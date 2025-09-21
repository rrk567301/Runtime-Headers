@interface MLCMatMulDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) float alpha;
@property (readonly, nonatomic) char transposesX;
@property (readonly, nonatomic) char transposesY;

+ (id)descriptor;
+ (id)descriptorWithAlpha:(float)a0 transposesX:(char)a1 transposesY:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithAlpha:(float)a0 transposesX:(char)a1 transposesY:(char)a2;

@end
