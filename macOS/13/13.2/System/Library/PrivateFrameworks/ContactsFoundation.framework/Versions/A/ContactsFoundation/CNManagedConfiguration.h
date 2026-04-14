@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;

+ (id)os_log;

- (id)init;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (BOOL)deviceHasManagementRestrictions;
- (BOOL)canReadFromLocalAccount;
- (BOOL)canWriteToLocalAccount;
- (BOOL)accountIsManaged:(id)a0;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)writableAccountsFromAccounts:(id)a0;
- (id)readableAccountsFromAccounts:(id)a0;

@end
