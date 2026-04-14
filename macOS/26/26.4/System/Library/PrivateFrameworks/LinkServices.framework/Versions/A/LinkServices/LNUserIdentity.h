@class NSString;

@interface LNUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *personaUniqueIdentifier;
@property (readonly, nonatomic) long long accessLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonaUniqueIdentifier:(id)a0 accessLevel:(long long)a1;
- (id)initWithPersonaUniqueIdentifier:(id)a0;

@end
