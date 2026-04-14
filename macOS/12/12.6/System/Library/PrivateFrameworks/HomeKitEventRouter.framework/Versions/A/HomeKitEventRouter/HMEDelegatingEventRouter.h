@class NSString, HMETopicRouter, NSObject, NSMutableArray;
@protocol OS_os_log, HMELastEventStoreReadHandle, OS_dispatch_queue, HMEDelegatingEventRouterDataSource;

@interface HMEDelegatingEventRouter : NSObject <HMETopicRouterDelegate, HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding> {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    HMETopicRouter *_topicRouter;
    NSMutableArray *_subRouters;
    id<HMEDelegatingEventRouterDataSource> _dataSource;
    id<HMELastEventStoreReadHandle> _eventStoreReadHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 logCategory:(const char *)a2;
- (void)registerSubRouter:(id)a0;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)changeRegistrationsSyncForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)unregisterConsumerSync:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 logger:(id)a2;
- (void)unregisterSubRouter:(id)a0;

@end
