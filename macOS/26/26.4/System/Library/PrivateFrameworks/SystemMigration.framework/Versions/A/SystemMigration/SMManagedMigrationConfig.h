@class NSArray;

@interface SMManagedMigrationConfig : SMManagedMigrationXPCClient <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL shouldDoManagedMigration;
@property (retain) NSArray *excludedAccounts;
@property (retain) NSArray *excludedPaths;
@property (retain) NSArray *requiredPaths;
@property BOOL shouldMigrateSecurityPrivacySettings;
@property BOOL shouldMigrateOtherFiles;
@property (retain) NSArray *declarationKeys;

+ (BOOL)isManagedMigrationEnabled;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)boolValueFromReply:(id)a0 forKey:(id)a1;
- (id)initForTestingWithMockDaemonProxy:(id)a0;
- (void)removeManagedMigrationConfigWithCompletionHandler:(id /* block */)a0;
- (void)updateWithMDMConfig:(id)a0 completionHandler:(id /* block */)a1;

@end
