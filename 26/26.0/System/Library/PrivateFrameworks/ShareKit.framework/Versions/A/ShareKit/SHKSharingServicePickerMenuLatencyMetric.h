@class NSNumber, SHKLatencyMeasurement, NSString;

@interface SHKSharingServicePickerMenuLatencyMetric : SHKMetric

@property (retain) NSNumber *actionExtensionsCount;
@property BOOL hasShownFetching;
@property BOOL isAsync;
@property BOOL isMenuOnlyRequest;
@property BOOL isOnMainThread;
@property (retain) SHKLatencyMeasurement *menuLatencyMeasurement;
@property (retain) NSString *processName;
@property (retain) NSNumber *sharedItemsCount;
@property (retain) NSNumber *sharingExtensionsCount;
@property (retain) NSNumber *useCount;

- (void)report;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldReport;

@end
