@interface AuRA_DoubleRange : NSObject <NSCopying>

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end
