@class NSSet, NSString;
@protocol HMDWidgetConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject <HMFLogging>

@property (class, readonly, copy) NSSet *allInteractiveWidgetKinds;

@property (readonly) id<HMDWidgetConfigurationReaderInterface> interface;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSSet *interactiveWidgetIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)fetchHomeWidgetsWithCompletion:(id /* block */)a0;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;
- (id)initWithInterface:(id)a0 bundleIdentifier:(id)a1 interactiveWidgetIdentifiers:(id)a2;

@end
