@interface LNTargetMetadataCondition : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) LNTargetMetadataCondition *foregroundCondition;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
