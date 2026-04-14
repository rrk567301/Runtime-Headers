@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;
@property (readonly, copy, nonatomic) NSString *providerContainerIdentifier;
@property (readonly) NSString *clientBundleIdentifier;

+ (id)os_log;

- (BOOL)hasContactProviderRestrictions;
- (id)accountForIdentifier:(id)a0;
- (BOOL)deviceHasManagementRestrictions;
- (BOOL)accountIsManaged:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (id)init;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)initForContactProvider;
- (id)writableAccountsFromAccounts:(id)a0;
- (id)readableAccountsFromAccounts:(id)a0;
- (void).cxx_destruct;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (BOOL)canWriteToLocalAccount;
- (BOOL)canAccessProviderContainerWithIdentifier:(id)a0;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (BOOL)canReadFromLocalAccount;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (void)setProviderContainerIdentifier:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;

@end
