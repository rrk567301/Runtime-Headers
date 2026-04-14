@class NSArray;
@protocol HKSPWidgetRelevanceController, NAScheduler, HKSPSleepWidgetManagerDelegate;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<HKSPWidgetRelevanceController> relevanceController;
@property (readonly, nonatomic) id<NAScheduler> chsScheduler;
@property (weak, nonatomic) id<HKSPSleepWidgetManagerDelegate> delegate;

+ (id)defaultTimelineControllers;
+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (id)defaultRelevanceController;
+ (id)widgetBundleIdentifierForCurrentDevice;
+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)widgetContainerBundleIdentifierForCurrentDevice;
+ (id)widgetKinds;

- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1;
- (void)invalidateRelevances;
- (void).cxx_destruct;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1 timelineScheduler:(id)a2;
- (void)reloadWidgetsWithReason:(unsigned long long)a0;
- (id)init;

@end
