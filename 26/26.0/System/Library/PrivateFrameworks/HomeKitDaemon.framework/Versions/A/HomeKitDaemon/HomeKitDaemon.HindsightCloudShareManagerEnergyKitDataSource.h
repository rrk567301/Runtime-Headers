@interface HomeKitDaemon.HindsightCloudShareManagerEnergyKitDataSource : NSObject <HMDHomeHindsightCloudShareManagerDataSource>

- (id)init;
- (BOOL)shouldCreateZoneForHome:(id)a0;
- (BOOL)shouldGrantWriteAccessToUser:(id)a0;
- (BOOL)shouldShareWithUser:(id)a0;
- (id)zoneUUIDForHome:(id)a0;

@end
