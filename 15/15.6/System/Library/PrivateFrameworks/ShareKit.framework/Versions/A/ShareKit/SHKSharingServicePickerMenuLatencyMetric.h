@class NSNumber, SHKLatencyMeasurement, NSString;

@interface SHKSharingServicePickerMenuLatencyMetric : SHKMetric

@property (retain) NSNumber *actionExtensionsCount;
@property char hasShownFetching;
@property char isAsync;
@property char isMenuOnlyRequest;
@property char isOnMainThread;
@property (retain) SHKLatencyMeasurement *menuLatencyMeasurement;
@property (retain) NSString *processName;
@property (retain) NSNumber *sharedItemsCount;
@property (retain) NSNumber *sharingExtensionsCount;
@property (retain) NSNumber *useCount;

- (id)init;
- (void).cxx_destruct;
- (void)report;
- (char)shouldReport;

@end
