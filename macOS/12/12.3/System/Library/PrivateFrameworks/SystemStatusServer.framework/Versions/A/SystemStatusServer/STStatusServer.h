@class NSString, STStatusDomainDataChangeLog, STStatusDomainPublisherXPCClientListener, NSObject, BSIntegerSet, BSMutableIntegerMap, NSMapTable, STStatusDomainXPCClientListener;
@protocol OS_dispatch_queue, STStatusServerDelegate;

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle>

@property (readonly, nonatomic) BSMutableIntegerMap *clientsByDomain;
@property (readonly, nonatomic) BSMutableIntegerMap *publisherClientsByDomain;
@property (readonly, nonatomic) NSMapTable *changeLogKeysByPublisherClient;
@property (readonly, nonatomic) STStatusDomainDataChangeLog *dataChangeLog;
@property (readonly, nonatomic) STStatusDomainXPCClientListener *xpcClientListener;
@property (readonly, nonatomic) STStatusDomainPublisherXPCClientListener *publisherXPCClientListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) id<STStatusServerDelegate> delegate;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)_internalQueue_dataForDomain:(unsigned long long)a0;
- (id)dataForDomain:(unsigned long long)a0;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)_internalQueue_publishedDomains;
- (id)_internalQueue_volatileDataForDomain:(unsigned long long)a0;
- (void)_internalQueue_mutateDataForDomain:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)_internalQueue_publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 inDataChangeRecord:(id)a3 completion:(id /* block */)a4;
- (id)_internalQueue_fallbackDataForPublisherClient:(id)a0 domain:(unsigned long long)a1;
- (void)_internalQueue_publishDiff:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 inDataChangeRecord:(id)a3 completion:(id /* block */)a4;
- (id)_internalQueue_presentationDataForDomain:(unsigned long long)a0;
- (void)_internalQueue_notifyClient:(id)a0 ofData:(id)a1 forDomain:(unsigned long long)a2;
- (void)_internalQueue_enumeratePublisherClientsForDomain:(unsigned long long)a0 withClientQueueBlock:(id /* block */)a1;
- (void)_internalQueue_enumerateClientsForDomain:(unsigned long long)a0 withClientQueueBlock:(id /* block */)a1;

@end
