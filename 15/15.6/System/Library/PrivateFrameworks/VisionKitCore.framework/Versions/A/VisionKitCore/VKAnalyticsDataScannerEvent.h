@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent

@property (nonatomic) double feedDuration;
@property (nonatomic) char didScanForText;
@property (nonatomic) char didScanForBarcodes;
@property (readonly, nonatomic) char isHealth;

- (id)description;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithFeedDuration:(double)a0 scannedForText:(char)a1 scannedForBarcodes:(char)a2 customIdentifier:(id)a3;

@end
