@interface AuRA_DoubleRange : NSObject <NSCopying>

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
