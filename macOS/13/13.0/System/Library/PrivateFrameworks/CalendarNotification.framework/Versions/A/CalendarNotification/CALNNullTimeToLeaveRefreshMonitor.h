@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor>

@property (class, readonly, nonatomic) CALNNullTimeToLeaveRefreshMonitor *sharedInstance;

@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;
- (void)removeRefreshTimerForEventExternalURL:(id)a0;

@end
