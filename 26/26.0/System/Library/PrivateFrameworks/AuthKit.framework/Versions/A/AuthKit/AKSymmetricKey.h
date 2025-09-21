@class NSData, _SFSymmetricKeySpecifier, NSString;

@interface AKSymmetricKey : NSObject <AKSymmetricKeyProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, copy, nonatomic) _SFSymmetricKeySpecifier *keySpecifier;
@property (readonly, copy, nonatomic) NSString *keyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromSymmetricKey:(id)a0;
- (id)initWithKeyData:(id)a0 keySpecifier:(id)a1 keyDomain:(id)a2;

@end
