@class UNUserNotificationCenter, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface PKUserNotificationAuthorizationController : NSObject {
    UNUserNotificationCenter *_center;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void)authorizationStatusRequiresPromptWithCompletion:(id /* block */)a0;
- (void)authorizationStatusWithCompletion:(id /* block */)a0;
- (void)requestNotificationAuthorizationWithCompletion:(id /* block */)a0;
- (void)shouldOfferAuthorizationPromptWithDataProvider:(id)a0 completion:(id /* block */)a1;
- (void)setPresentedNotificationAuthorizationPromptShown;

@end
