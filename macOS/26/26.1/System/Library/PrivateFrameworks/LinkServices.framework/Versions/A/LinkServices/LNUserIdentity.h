@class NSString;

@interface LNUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *personaUniqueIdentifier;
@property (readonly, nonatomic) long long accessLevel;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPersonaUniqueIdentifier:(id)a0 accessLevel:(long long)a1;
- (id)initWithPersonaUniqueIdentifier:(id)a0;

@end
