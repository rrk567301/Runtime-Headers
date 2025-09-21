@class LNActionMetadata, NSString;

@interface LNQueryRequestParameterTarget : LNQueryRequestTargetBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionMetadata *actionMetadata;
@property (readonly, copy, nonatomic) NSString *parameterIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionMetadata:(id)a0 parameterIdentifier:(id)a1;
- (id)initWithActionMetadata:(id)a0 parameterIndex:(long long)a1;

@end
