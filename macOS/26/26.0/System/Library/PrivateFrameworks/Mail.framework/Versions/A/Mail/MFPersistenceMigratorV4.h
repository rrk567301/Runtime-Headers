@class ACAccountStore;

@interface MFPersistenceMigratorV4 : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void)migrate;
- (id)init;
- (void).cxx_destruct;
- (void)_moveAccountDirectories;
- (id)_upgradeLocalAccountOutbox;
- (void)_upgradeSyncedFilesInfo;

@end
