@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) int iOSLegacyIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *externalIdentifierString;

+ (id)os_log;
+ (id)identifierProvider;
+ (id)localAccount;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (char)macos_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;
+ (char)requestAccountSyncWithDefaultOptions;
+ (char)requestAccountSyncWithOptions:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;

@end
