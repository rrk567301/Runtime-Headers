@class IDSSigningKeyDiversifier;

@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int keyType;
@property (retain, nonatomic) IDSSigningKeyDiversifier *keyDiversifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyType:(unsigned int)a0 diversifier:(id)a1;

@end
