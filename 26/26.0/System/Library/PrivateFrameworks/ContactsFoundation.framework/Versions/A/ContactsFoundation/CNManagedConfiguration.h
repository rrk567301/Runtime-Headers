@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;
@property (readonly, copy, nonatomic) NSString *providerContainerIdentifier;
@property (readonly) NSString *clientBundleIdentifier;

+ (id)os_log;

- (id)accountForIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (id)writableAccountsFromAccounts:(id)a0;
- (BOOL)accountIsManaged:(id)a0;
- (BOOL)deviceHasManagementRestrictions;
- (id)init;
- (BOOL)canAccessProviderContainerWithIdentifier:(id)a0;
- (BOOL)hasContactProviderRestrictions;
- (void)setProviderContainerIdentifier:(id)a0;
- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;
- (BOOL)canWriteToLocalAccount;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)initForContactProvider;
- (id)readableAccountsFromAccounts:(id)a0;
- (BOOL)canReadFromLocalAccount;
- (void).cxx_destruct;

@end
