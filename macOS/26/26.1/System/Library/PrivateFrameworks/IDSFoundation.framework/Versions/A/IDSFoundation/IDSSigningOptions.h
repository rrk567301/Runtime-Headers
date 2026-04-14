@class IDSSigningKeyDiversifier;

@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int keyType;
@property (retain, nonatomic) IDSSigningKeyDiversifier *keyDiversifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithKeyType:(unsigned int)a0 diversifier:(id)a1;

@end
