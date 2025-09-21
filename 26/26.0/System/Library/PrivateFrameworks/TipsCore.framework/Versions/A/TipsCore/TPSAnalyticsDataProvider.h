@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)contextForIdentifier:(id)a0;
- (id)deliveryInfoVersion;
- (id)initWithDataSource:(id)a0;
- (id)experimentID;
- (id)displayTypeForIdentifier:(id)a0;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;
- (id)experimentCampID;
- (id)correlationIDForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
