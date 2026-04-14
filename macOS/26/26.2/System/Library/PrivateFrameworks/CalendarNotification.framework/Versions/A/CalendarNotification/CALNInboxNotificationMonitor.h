@class NSString, NSArray, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider>

@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;

- (void)receivedAlarmNamed:(id)a0;
- (void)addNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;
- (void)removeNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;
- (id)initWithEventStoreProvider:(id)a0;
- (void)removeNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)addNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void)protectedDataDidBecomeAvailable;
- (void)activate;
- (void)removeNotificationsChangedObserver:(id)a0;
- (void)didRegisterForAlarms;
- (void)deactivate;
- (void)addNotificationsChangedObserver:(id)a0 selector:(SEL)a1;
- (void)receivedNotificationNamed:(id)a0;

@end
