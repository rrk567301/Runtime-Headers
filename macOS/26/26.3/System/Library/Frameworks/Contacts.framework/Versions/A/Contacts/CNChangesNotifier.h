@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (void)flushSharedNotifier;
+ (id)sharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;

- (void)fakePostDidSavePosters;
- (void)waitForCurrentTasksToFinish;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)willSaveChanges;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)dealloc;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;

@end
