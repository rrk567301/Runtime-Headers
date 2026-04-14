@interface AuRA_DoubleRange : NSObject <NSCopying>

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
