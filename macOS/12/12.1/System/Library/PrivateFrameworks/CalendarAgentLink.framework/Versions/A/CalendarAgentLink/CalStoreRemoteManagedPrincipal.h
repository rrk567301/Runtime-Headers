@class CalStoreRemoteManagedAccount, NSString, CalStoreRemoteManagedMigrationGroup;

@interface CalStoreRemoteManagedPrincipal : CalStoreRemoteManagedGroup

@property (retain, nonatomic) CalStoreRemoteManagedAccount *account;
@property (retain, nonatomic) NSString *fullName;
@property (nonatomic) BOOL isDelegate;
@property (nonatomic) BOOL isManuallyConfigured;
@property (retain, nonatomic) CalStoreRemoteManagedMigrationGroup *migrationGroup;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
