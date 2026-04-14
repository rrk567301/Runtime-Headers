@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) _EKAlarmEngine *alarmEngine;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (id)initWithAlarmEngine:(id)a0 notificationCenter:(id)a1;
- (void)didRegisterForAlarms;
- (void)addAlarmsFiredObserver:(id)a0 selector:(SEL)a1;
- (void)receivedNotificationNamed:(id)a0;
- (void)removeAlarmsFiredObserver:(id)a0;
- (void)activate;

@end
