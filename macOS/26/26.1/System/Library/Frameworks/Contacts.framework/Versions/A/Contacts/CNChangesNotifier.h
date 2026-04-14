@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (void)flushSharedNotifier;
+ (id)sharedNotifier;

- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)dealloc;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)fakePostDidSavePosters;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;
- (void).cxx_destruct;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)waitForCurrentTasksToFinish;
- (void)willSaveChanges;

@end
