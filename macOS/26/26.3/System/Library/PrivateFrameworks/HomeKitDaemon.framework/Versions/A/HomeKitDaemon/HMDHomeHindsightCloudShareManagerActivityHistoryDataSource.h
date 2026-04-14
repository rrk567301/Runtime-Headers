@class HMDHomeKitVersion, NSString;

@interface HMDHomeHindsightCloudShareManagerActivityHistoryDataSource : NSObject <HMDHomeHindsightCloudShareManagerDataSource>

@property (readonly, nonatomic) HMDHomeKitVersion *minimumHomeKitVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cloudShareManagerDidCreateZone:(id)a0;
- (BOOL)shouldCreateZoneForHome:(id)a0;
- (BOOL)shouldGrantWriteAccessToUser:(id)a0;
- (BOOL)shouldShareWithUser:(id)a0;
- (id)zoneUUIDForHome:(id)a0;

@end
