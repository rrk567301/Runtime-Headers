@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int iOSLegacyIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *externalIdentifierString;

+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)os_log;
+ (id)localAccount;
+ (BOOL)macos_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;
+ (BOOL)requestAccountSyncWithDefaultOptions;
+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExternalIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;

@end
