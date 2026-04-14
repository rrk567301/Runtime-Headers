@class NSString, NSMutableDictionary, NSOperationQueue, APSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate> {
    NSString *_apsEnvironment;
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    APSConnection *_apsConnection;
    unsigned long long _strategy;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *machServiceName;
@property (nonatomic) BOOL useOpportunisticPushTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connectionDidReconnect:(id)a0;
- (void)unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)registerForSubscription:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2;
- (id)initWithStrategy:(unsigned long long)a0;
- (id)initWithStrategy:(unsigned long long)a0 machServiceName:(id)a1;
- (id)uniqueKeyForSubscriptionID:(id)a0 inDatabase:(id)a1;
- (void)handlePushNotificationWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)didReceiveIncomingPushWithPayload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)hasInitializedAPSConnection;
- (BOOL)isRegisteredForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (id)apsConnectionOnQueue;

@end
