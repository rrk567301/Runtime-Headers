@protocol MFPersistenceMigratorV3Delegate;

@interface MFPersistenceMigratorV3 : NSObject

@property (weak, nonatomic) id<MFPersistenceMigratorV3Delegate> delegate;

- (void).cxx_destruct;
- (void)migrate;
- (id)_updateSmartMailboxes:(id)a0;
- (id)_updateRules:(id)a0;
- (id)_fixCriteria:(id)a0;
- (void)_migrateDefaults;
- (void)_moveAccountsPlistFromV3BackToV2;
- (void)_migratePlistsContainingPaths;
- (id)_fixSmartMailboxCriteria:(id)a0;

@end
