@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifier;
+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;

- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;
- (void)fakePostDidSavePosters;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)waitForCurrentTasksToFinish;
- (void).cxx_destruct;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)willSaveChanges;
- (void)dealloc;

@end
