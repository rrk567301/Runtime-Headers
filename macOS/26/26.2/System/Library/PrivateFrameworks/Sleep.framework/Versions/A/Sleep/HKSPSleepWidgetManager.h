@class NSArray;
@protocol HKSPWidgetRelevanceController, NAScheduler, HKSPSleepWidgetManagerDelegate;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<HKSPWidgetRelevanceController> relevanceController;
@property (readonly, nonatomic) id<NAScheduler> chsScheduler;
@property (weak, nonatomic) id<HKSPSleepWidgetManagerDelegate> delegate;

+ (id)widgetKinds;
+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (id)defaultRelevanceController;
+ (id)widgetContainerBundleIdentifierForCurrentDevice;
+ (id)defaultTimelineControllers;
+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)widgetBundleIdentifierForCurrentDevice;

- (void)reloadWidgetsWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)invalidateRelevances;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1 timelineScheduler:(id)a2;
- (id)init;

@end
