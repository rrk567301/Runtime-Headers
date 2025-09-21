@interface APFeatureFlags : NSObject

@property (class, readonly, nonatomic) char onDeviceAttributionEnabled;
@property (class, readonly, nonatomic) char onDeviceConversionEnabled;
@property (class, readonly, nonatomic) char modernDataCollectionEnabled;
@property (class, readonly, nonatomic) char actionStoreEnabled;
@property (class, readonly, nonatomic) char experimentationReportEnabled;

@end
