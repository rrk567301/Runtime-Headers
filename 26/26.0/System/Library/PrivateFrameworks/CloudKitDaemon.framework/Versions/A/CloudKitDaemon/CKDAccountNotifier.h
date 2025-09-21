@class NSOperationQueue, NSMapTable, NSMutableDictionary;

@interface CKDAccountNotifier : NSObject

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;
@property (retain, nonatomic) NSMutableDictionary *authTokenRenewalHandlersByAccountID;
@property (getter=isWarmingUp) BOOL warmingUp;

+ (id)sharedNotifier;

- (void)unregisterObserverForAccountChangeNotification:(id)a0;
- (void)notifyAuthTokenRenewalInProgress:(BOOL)a0 forAccountID:(id)a1;
- (void)dealloc;
- (void)registerObserver:(id)a0 forAccountID:(id)a1 authTokenRenewalInProgressNotifications:(id /* block */)a2;
- (void)unregisterObserver:(id)a0 forAuthTokenRenewalInProgressNotificationsForAccountID:(id)a1;
- (id)init;
- (void)registerObserver:(id)a0 forAccountChangeNotification:(id /* block */)a1;
- (id)_accountChangeNotificationOperation:(BOOL)a0;
- (void)postAccountChangedNotificationWithAccountID:(id)a0 changeType:(long long)a1;
- (void).cxx_destruct;
- (void)postAccountChangedNotificationToClients;

@end
