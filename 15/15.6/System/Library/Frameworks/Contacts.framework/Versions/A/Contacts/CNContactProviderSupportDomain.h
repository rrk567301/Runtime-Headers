@class NSString, NSDictionary;

@interface CNContactProviderSupportDomain : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isRegistered) char registered;
@property (nonatomic, getter=isEnabled) char enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomainIdentifer:(id)a0 displayName:(id)a1 userInfo:(id)a2 bundleIdentifier:(id)a3 registered:(char)a4 enabled:(char)a5;

@end
