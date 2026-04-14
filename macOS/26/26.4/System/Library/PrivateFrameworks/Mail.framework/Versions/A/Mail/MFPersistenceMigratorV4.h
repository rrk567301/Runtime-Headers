@class ACAccountStore;

@interface MFPersistenceMigratorV4 : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void)migrate;
- (void).cxx_destruct;
- (id)init;
- (void)_moveAccountDirectories;
- (id)_upgradeLocalAccountOutbox;
- (void)_upgradeSyncedFilesInfo;

@end
