@class NSMutableDictionary, CalLimitingQueue, EKEventStore, NSString, NSObject;
@protocol OS_dispatch_queue, EKNotificationInfoDelegate;

@interface EKNotificationEngine : NSObject

@property (retain) CalLimitingQueue *limitingQueue;
@property (retain) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain) NSMutableDictionary *timers;
@property (retain) EKEventStore *eventStore;
@property (weak) id<EKNotificationInfoDelegate> notificationDelegate;
@property (readonly, nonatomic) NSString *engineID;

+ (BOOL)shouldLogFor35464009;
+ (id)logHandleFor35464009;
+ (void)openURLString:(id)a0 withApp:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)action;
- (void)_registerForNotifications;
- (void)_performAction;
- (void)_resetTimers;
- (void)quickAction;
- (id)_interestingNotifications;
- (void)_notificationReceived:(id)a0;
- (void)_performQuickAction;
- (BOOL)_handlesDismissalForType:(id)a0;
- (void)_handleDismissalForIdentifier:(id)a0 userInfo:(id)a1 dismissedAlert:(BOOL)a2;
- (BOOL)_handlesActivationForType:(id)a0;
- (void)_handleActivationForIdentifier:(id)a0 userInfo:(id)a1 clickActivation:(BOOL)a2 additionalActionClicked:(id)a3;
- (BOOL)_handlesExpirationForType:(id)a0;
- (void)_handleExpirationForIdentifiers:(id)a0;
- (BOOL)_contributesToCalendarBadgeCount;
- (void)_calendarBadgeCountWithReply:(id /* block */)a0;
- (BOOL)_contributesToRemindersBadgeCount;
- (void)_remindersBadgeCountWithReply:(id /* block */)a0;
- (BOOL)_contributesToRemindersWithContactBadgeCount;
- (void)_remindersBadgeCountForContactIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_timerFiredWithLabel:(id)a0 performsQuickAction:(BOOL)a1;
- (id)initWithEventStore:(id)a0 actionQueue:(id)a1 timerQueue:(id)a2 notificationDelegate:(id)a3;
- (void)handleDismissalForType:(id)a0 identifier:(id)a1 userInfo:(id)a2 dismissedAlert:(BOOL)a3;
- (void)handleActivationForType:(id)a0 identifier:(id)a1 userInfo:(id)a2 clickActivation:(BOOL)a3 additionalActionClicked:(id)a4;
- (void)handleExpirationForType:(id)a0 identifiers:(id)a1 after:(double)a2;
- (void)calendarBadgeCountWithReply:(id /* block */)a0;
- (void)remindersBadgeCountWithReply:(id /* block */)a0;
- (void)remindersBadgeCountForContactIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_removeNotificationIdentifiers:(id)a0;
- (void)_scheduleTimerWithLabel:(id)a0 interval:(double)a1 quickAction:(BOOL)a2;

@end
