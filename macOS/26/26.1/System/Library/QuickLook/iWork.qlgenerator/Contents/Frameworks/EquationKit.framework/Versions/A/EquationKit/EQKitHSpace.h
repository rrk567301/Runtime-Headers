@interface EQKitHSpace : EQKitBox

@property (readonly, nonatomic) double width;

- (unsigned long long)hash;
- (id)initWithWidth:(double)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
