@class NSString, NSSet;
@protocol HMDFeaturesDataSource, HMDWidgetConfigurationReaderInterface, HMDControlsConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject <HMFLogging>

@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) id<HMDWidgetConfigurationReaderInterface> widgetInterface;
@property (readonly) id<HMDControlsConfigurationReaderInterface> controlsInterface;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSSet *lockScreenWidgetKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)fetchHomeWidgetsWithCompletion:(id /* block */)a0;
- (void)fetchHomeControlsWithCompletion:(id /* block */)a0;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;
- (id)initWithWidgetInterface:(id)a0 controlsInterface:(id)a1 bundleIdentifier:(id)a2 lockScreenWidgetKinds:(id)a3 featuresDataSource:(id)a4;

@end
