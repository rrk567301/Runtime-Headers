@class NSMutableDictionary;
@protocol ATXWidgetDwellTrackerDelegate;

@interface ATXWidgetDwellTracker : NSObject {
    NSMutableDictionary *_widgetUniqueIdToAppearDateMap;
}

@property (weak, nonatomic) id<ATXWidgetDwellTrackerDelegate> delegate;

- (void)widgetDidDisappear:(id)a0 date:(id)a1;
- (void)resetAllTracking;
- (id)init;
- (void)widgetDidAppear:(id)a0 date:(id)a1;
- (void).cxx_destruct;

@end
