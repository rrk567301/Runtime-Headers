@class NSString, HMETopicRouter, NSObject;
@protocol OS_os_log, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, OS_dispatch_queue, HMERouterClientDelegate;

@interface HMERouterClient : NSObject <HMECachedEventSource, HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMESubscriptionProviding> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMELastEventStoreWriteHandle> eventStoreWriteHandle;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMETopicRouter *topicRouter;
@property (weak) id<HMERouterClientDelegate> privateDelegate;
@property (readonly, nonatomic) BOOL isCachedEventSourceCurrentProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregisterConsumerSync:(id)a0 completion:(id /* block */)a1;
- (void)cachedEventsForTopicFilters:(id)a0 cachedEventCollection:(id)a1;
- (id)forwardingTopicsForTopics:(id)a0;
- (id)synchronousSubscriptionProvider;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (void)changeRegistrationsSyncForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)willWriteToStore;
- (id)dumpStateDescription;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (void)processReceivedEvents:(id)a0;
- (id)processReceivedCachedEvents:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 logger:(id)a2;
- (BOOL)isActiveForSaving;
- (void).cxx_destruct;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;

@end
