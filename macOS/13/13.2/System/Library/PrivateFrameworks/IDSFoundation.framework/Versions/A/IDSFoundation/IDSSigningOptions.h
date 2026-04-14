@class IDSSigningKeyDiversifier;

@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int keyType;
@property (retain, nonatomic) IDSSigningKeyDiversifier *keyDiversifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyType:(unsigned int)a0 diversifier:(id)a1;

@end
