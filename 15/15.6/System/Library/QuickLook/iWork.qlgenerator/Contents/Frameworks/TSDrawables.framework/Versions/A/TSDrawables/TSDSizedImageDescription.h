@interface TSDSizedImageDescription : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) char isWideGamut;
@property (readonly, nonatomic) char hasBakedMask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isEqualToSizedImageDescription:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 isWideGamut:(char)a1 hasBakedMask:(char)a2;

@end
