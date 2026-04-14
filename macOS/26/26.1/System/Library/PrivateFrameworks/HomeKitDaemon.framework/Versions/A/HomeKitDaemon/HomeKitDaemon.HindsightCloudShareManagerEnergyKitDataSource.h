@class HMDHomeKitVersion;

@interface HomeKitDaemon.HindsightCloudShareManagerEnergyKitDataSource : NSObject <HMDHomeHindsightCloudShareManagerDataSource>

@property (nonatomic, readonly) HMDHomeKitVersion *minimumHomeKitVersion;

- (id)init;
- (BOOL)shouldCreateZoneForHome:(id)a0;
- (BOOL)shouldGrantWriteAccessToUser:(id)a0;
- (BOOL)shouldShareWithUser:(id)a0;
- (id)zoneUUIDForHome:(id)a0;

@end
