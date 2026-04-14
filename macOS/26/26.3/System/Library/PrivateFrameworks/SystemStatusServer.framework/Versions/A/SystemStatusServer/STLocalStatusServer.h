@class NSString, STStatusDomainDataChangeLog, NSMutableDictionary, STStatusDomainPublisherXPCClientListener, BSIntegerSet, BSMutableIntegerMap, NSObject, NSMapTable, STStatusDomainXPCClientListener;
@protocol OS_dispatch_queue, STLocalStatusServerDelegate;

@interface STLocalStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {
    BSMutableIntegerMap *_clientsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSMapTable *_changeLogKeysByPublisherClient;
    STStatusDomainDataChangeLog *_dataChangeLog;
    STStatusDomainXPCClientListener *_xpcClientListener;
    STStatusDomainPublisherXPCClientListener *_publisherXPCClientListener;
    NSMutableDictionary *_dataTransformersByDomain;
    NSMutableDictionary *_clientDataTransformerProvidersByDomain;
    NSMutableDictionary *_domainsByChangeLogKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (weak, nonatomic) id<STLocalStatusServerDelegate> delegate;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (void)modifyDataTransformer:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)replaceDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)removeDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)addClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (id)init;
- (void)addDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)replaceVolatileDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescription;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)modifyClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (void)removeClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (id)dataForDomain:(unsigned long long)a0 client:(id)a1;
- (id)internalQueuePublisherServerHandle;

@end
