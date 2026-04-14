@interface ULMapPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

+ (id)new;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithX:(float)a0 Y:(float)a1 Z:(float)a2;

@end
