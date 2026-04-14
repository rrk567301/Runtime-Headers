@class NSOperationQueue, NSMapTable, NSMutableDictionary;

@interface CKDAccountNotifier : NSObject

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;
@property (retain, nonatomic) NSMutableDictionary *authTokenRenewalHandlersByAccountID;
@property (getter=isWarmingUp) BOOL warmingUp;

+ (id)sharedNotifier;

- (void)unregisterObserver:(id)a0 forAuthTokenRenewalInProgressNotificationsForAccountID:(id)a1;
- (void)postAccountChangedNotificationWithAccountID:(id)a0 changeType:(long long)a1;
- (void)postAccountChangedNotificationToClients;
- (void).cxx_destruct;
- (void)notifyAuthTokenRenewalInProgress:(BOOL)a0 forAccountID:(id)a1;
- (id)_accountChangeNotificationOperation:(BOOL)a0;
- (void)registerObserver:(id)a0 forAccountID:(id)a1 authTokenRenewalInProgressNotifications:(id /* block */)a2;
- (void)unregisterObserverForAccountChangeNotification:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0 forAccountChangeNotification:(id /* block */)a1;
- (void)dealloc;

@end
