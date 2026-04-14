@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int iOSLegacyIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *externalIdentifierString;

+ (id)os_log;
+ (id)localAccount;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)macos_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)requestAccountSyncWithDefaultOptions;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;
- (id)initWithExternalIdentifier:(id)a0;

@end
