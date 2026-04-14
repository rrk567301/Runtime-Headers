@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)experimentID;
- (id)contextForIdentifier:(id)a0;
- (BOOL)isNotificationModelControl;
- (id)bundleIDForIdentifier:(id)a0;
- (id)correlationIDForIdentifier:(id)a0;
- (id)displayTypeForIdentifier:(id)a0;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;
- (id)experimentCampID;
- (id)deliveryInfoVersion;

@end
