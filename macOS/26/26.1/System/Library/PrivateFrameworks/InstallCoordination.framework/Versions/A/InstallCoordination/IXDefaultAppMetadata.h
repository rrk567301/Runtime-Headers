@class IXApplicationIdentity;

@interface IXDefaultAppMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long appType;
@property (readonly, nonatomic) unsigned long long offloadAnswer;
@property (readonly, nonatomic) IXApplicationIdentity *identity;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAppIdentity:(id)a0 appType:(unsigned long long)a1 offloadAnswer:(unsigned long long)a2;

@end
