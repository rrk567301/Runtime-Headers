@class IMDoubleLinkedList;
@protocol IMEventNotificationQueueDelegate;

@interface IMEventNotificationQueue : NSObject

@property (readonly, nonatomic) IMDoubleLinkedList *eventNotificationList;
@property (readonly, getter=isScheduled) char scheduled;
@property (weak) id<IMEventNotificationQueueDelegate> delegate;
@property (readonly, getter=isBusy) char busy;
@property (readonly) long long count;
@property (getter=isPaused) char paused;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)_setBusy:(char)a0;
- (void)_didAddNotification:(id)a0;
- (void)_didCancelNotifications;
- (void)_didChangeBusyState:(char)a0;
- (void)_didChangePausedState:(char)a0;
- (void)_didProcessQueue;
- (void)_dispatchProcessQueue;
- (void)_invokeEvent:(id)a0;
- (void)_invokeNotifications;
- (void)_processQueue;
- (void)_scheduleIfNeeded:(char)a0;
- (void)_willProcessQueue;
- (void)appendEventNotification:(id)a0;
- (void)appendEventTarget:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)appendEventTarget:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForNotificationTarget:(id)a0;
- (char)containsNotificationTarget:(id)a0;
- (void)pushEventNotification:(id)a0;
- (void)pushEventTarget:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)pushEventTarget:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;

@end
