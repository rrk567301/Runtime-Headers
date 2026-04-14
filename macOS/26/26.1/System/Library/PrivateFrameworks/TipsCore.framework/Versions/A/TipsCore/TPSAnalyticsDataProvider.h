@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)experimentID;
- (id)correlationIDForIdentifier:(id)a0;
- (id)experimentCampID;
- (void).cxx_destruct;
- (id)displayTypeForIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)contextForIdentifier:(id)a0;
- (id)deliveryInfoVersion;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;

@end
