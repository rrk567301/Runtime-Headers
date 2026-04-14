@class NSString;

@interface ULScanningServiceAnalyticsStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULScanningServiceAnalyticsDO, std::allocator<ULScanningServiceAnalyticsDO>> { struct ULScanningServiceAnalyticsDO *x0; struct ULScanningServiceAnalyticsDO *x1; struct ULScanningServiceAnalyticsDO *x2; })fetchScanningServiceEventsForType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a0 triggerType:(struct optional<ULTriggerType> { union { char x0; short x1; } x0; BOOL x1; })a1 displayState:(struct optional<ULScanningServiceAnalyticsDO::DisplayState> { union { char x0; short x1; } x0; BOOL x1; })a2 scanResult:(struct optional<ULScanningEventDO::ScanResultCode> { union { char x0; short x1; } x0; BOOL x1; })a3 startDate:(id)a4 endDate:(id)a5;
- (BOOL)insertDataObjects:(const void *)a0;

@end
