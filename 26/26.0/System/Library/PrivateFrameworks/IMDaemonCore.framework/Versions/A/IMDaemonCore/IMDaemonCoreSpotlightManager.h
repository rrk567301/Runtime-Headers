@interface IMDaemonCoreSpotlightManager : NSObject

@property (class, readonly, nonatomic) IMDaemonCoreSpotlightManager *sharedManager;

- (void)registerForCoreSpotlightIndexing;
- (void)registerForCoreSpotlightMigration;

@end
