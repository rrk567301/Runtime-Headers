@class NSString;

@interface PKIdentityPassCredentialProperty : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *subCredentialIdentifier;
@property (copy, nonatomic) NSString *docType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPassUniqueIdentifier:(id)a0 applicationIdentifier:(id)a1 subCredentialIdentifier:(id)a2;
- (id)initWithPassUniqueIdentifier:(id)a0 applicationIdentifier:(id)a1 subCredentialIdentifier:(id)a2 docType:(id)a3;
- (BOOL)isEqualToPKIdentityPassCredentialProperty:(id)a0;

@end
