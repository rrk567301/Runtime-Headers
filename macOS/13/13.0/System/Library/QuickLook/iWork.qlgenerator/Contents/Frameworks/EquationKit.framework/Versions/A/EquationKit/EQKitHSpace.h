@interface EQKitHSpace : EQKitBox

@property (readonly, nonatomic) double width;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidth:(double)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
