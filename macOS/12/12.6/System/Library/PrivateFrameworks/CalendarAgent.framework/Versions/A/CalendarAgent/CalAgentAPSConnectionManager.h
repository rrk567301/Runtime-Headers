@class APSConnection, CalLimitingQueue, NSMutableDictionary, NSString, NSObject, CalCalDAVTaskManager;
@protocol OS_dispatch_queue;

@interface CalAgentAPSConnectionManager : NSObject <APSConnectionDelegate, CalNetworkChangeNotificationListener>

@property (retain) APSConnection *apsConnection;
@property (retain) APSConnection *apsConnectionDev;
@property (retain) NSObject<OS_dispatch_queue> *apsConnectionManagerWorkSerialQueue;
@property (retain) NSObject<OS_dispatch_queue> *apsConnectionConcurrentQueue;
@property (retain) CalLimitingQueue *registerAllTopicsQueue;
@property (retain) NSMutableDictionary *registeredPrincipals;
@property BOOL subscriptionSuccessful;
@property (retain) CalCalDAVTaskManager *taskManager;
@property (retain) NSString *tokenString;
@property (retain) NSString *tokenStringDev;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (void)unregisterPrincipalWithObjectID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)systemNetworkDidChange;
- (void)_registerAllTopics;
- (void)registerAllTopics;
- (id)_logPrefixForConnection:(id)a0;
- (BOOL)_setTokenStringFromToken:(id)a0 production:(BOOL)a1;
- (void)_removeRegisteredPrincipalID:(id)a0 forKey:(id)a1;
- (void)_addRegisteredPrincipal:(id)a0 forKey:(id)a1;
- (id)_stringFromTokenData:(id)a0;
- (void)_sendAllSubscriptionRequestsForPrincipal:(id)a0 forDevelopment:(BOOL)a1;
- (id)_connectionForProductionEnvironment:(BOOL)a0;
- (void)_receivedTimedSubscribeWithInfo:(id)a0;
- (void)_sendSubscriptionRequestForPrincipal:(id)a0 toURL:(id)a1 withKey:(id)a2 withToken:(id)a3;
- (void)_scheduleNextSubscriptionForPrincipal:(id)a0 interval:(long long)a1 forDevelopment:(BOOL)a2;

@end
