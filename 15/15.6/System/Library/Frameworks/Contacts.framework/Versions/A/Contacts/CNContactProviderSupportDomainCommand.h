@class NSString, CNContactProviderSupportDomain, CNContactProviderSupportSession;

@interface CNContactProviderSupportDomainCommand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *domainIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) CNContactProviderSupportDomain *domain;
@property (retain, nonatomic) CNContactProviderSupportSession *session;
@property (nonatomic) char shouldSynchronize;
@property (readonly, nonatomic) NSString *commandType;

+ (id)new;
+ (id)addDomain:(id)a0;
+ (id)synchronizeDomain:(id)a0 usingSession:(id)a1;
+ (id)disableDomain:(id)a0 bundleIdentifier:(id)a1;
+ (id)fetchAllDomains;
+ (id)disableDomain:(id)a0;
+ (id)enableDomain:(id)a0;
+ (id)enableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(char)a2;
+ (id)fetchAllDomainsCount;
+ (id)fetchContainerIdentifierForDomain:(id)a0;
+ (id)fetchDomainEnabled:(id)a0;
+ (id)fetchRegisteredDomains;
+ (id)invalidateExtensionForDomain:(id)a0;
+ (id)removeDomain:(id)a0;
+ (id)resetEnumerationForDomain:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommandType:(id)a0;

@end
