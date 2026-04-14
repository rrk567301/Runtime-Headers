@class LNEntityMetadata;

@interface LNQueryRequestDefaultQueryTarget : LNQueryRequestTargetBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNEntityMetadata *entityMetadata;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEntityMetadata:(id)a0;

@end
