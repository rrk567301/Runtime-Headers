@interface _DPTokenFetcher : NSObject <_DPMaintenance>

- (BOOL)cleanupStaleTokensInPath:(id)a0;
- (void)doMaintenance;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
