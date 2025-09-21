@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)sharedNotifier;
+ (void)flushSharedNotifier;

- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)dealloc;
- (void)fakePostDidSavePosters;
- (void)willSaveChanges;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;
- (void)waitForCurrentTasksToFinish;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void).cxx_destruct;

@end
