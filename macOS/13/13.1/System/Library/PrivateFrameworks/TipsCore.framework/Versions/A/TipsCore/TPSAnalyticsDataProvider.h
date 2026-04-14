@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)contextForIdentifier:(id)a0;
- (id)experimentID;
- (id)trialDeploymentID;
- (id)trialExperimentID;
- (id)trialTreatmentID;
- (BOOL)isNotificationModelControl;
- (id)trialRampID;
- (id)experimentCampID;
- (id)displayTypeForIdentifier:(id)a0;
- (id)deliveryInfoVersion;
- (id)correlationIDForIdentifier:(id)a0;
- (id)bundleIDForIdentifier:(id)a0;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;

@end
