@class HKSPSleepStore, NSArray;
@protocol NAScheduler;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, weak, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<NAScheduler> reloadScheduler;

+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (id)defaultTimelineControllers;
+ (id)widgetBundleIdentifierForCurrentDevice;

- (void).cxx_destruct;
- (id)initWithSleepStore:(id)a0;
- (id)initWithSleepStore:(id)a0 timelineControllers:(id)a1;
- (void)reloadWidgetsWithReason:(unsigned long long)a0;

@end
