@class NSMutableDictionary;
@protocol ATXWidgetDwellTrackerDelegate;

@interface ATXWidgetDwellTracker : NSObject {
    NSMutableDictionary *_widgetUniqueIdToAppearDateMap;
}

@property (weak, nonatomic) id<ATXWidgetDwellTrackerDelegate> delegate;

- (void)widgetDidAppear:(id)a0 date:(id)a1;
- (void)widgetDidDisappear:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetAllTracking;

@end
