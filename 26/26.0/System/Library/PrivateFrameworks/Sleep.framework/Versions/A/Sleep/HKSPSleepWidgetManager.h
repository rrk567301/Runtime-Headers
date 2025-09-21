@class NSArray;
@protocol HKSPWidgetRelevanceController, NAScheduler, HKSPSleepWidgetManagerDelegate;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<HKSPWidgetRelevanceController> relevanceController;
@property (readonly, nonatomic) id<NAScheduler> chsScheduler;
@property (weak, nonatomic) id<HKSPSleepWidgetManagerDelegate> delegate;

+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)widgetContainerBundleIdentifierForCurrentDevice;
+ (id)widgetKinds;
+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (id)widgetBundleIdentifierForCurrentDevice;
+ (id)defaultTimelineControllers;
+ (id)defaultRelevanceController;

- (void)invalidateRelevances;
- (id)init;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1 timelineScheduler:(id)a2;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1;
- (void)reloadWidgetsWithReason:(unsigned long long)a0;
- (void).cxx_destruct;

@end
