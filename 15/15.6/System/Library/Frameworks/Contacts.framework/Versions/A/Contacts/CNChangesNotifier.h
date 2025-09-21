@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifier;
+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didChangeMeContactSuccessfully:(char)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)willSaveChanges;
- (void)didSaveChangesSuccessfully:(char)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (char)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(char)a0;
- (void)waitForCurrentTasksToFinish;

@end
