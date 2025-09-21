@class NSString;
@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule>

@property (readonly, nonatomic) id<CALNTimeToLeaveRefreshStorage> storage;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isRegisteredForAlarms) char registeredForAlarms;
@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_refreshTimerAlarmNameForEventExternalURL:(id)a0;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (id)initWithStorage:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)_refreshTimerFiredForEventExternalURL:(id)a0;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)removeRefreshTimerForEventExternalURL:(id)a0;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;

@end
