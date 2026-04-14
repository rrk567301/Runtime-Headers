@class NSObject, NSString, NSXPCConnection, STStatusDomainDataChangeLog, BSMutableIntegerMap;
@protocol OS_dispatch_queue, STServerLaunchObservable;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, STServerLaunchObserver, BSDescriptionProviding, STStatusDomainPublisherServerHandle> {
    STStatusDomainDataChangeLog *_dataChangeLog;
    BSMutableIntegerMap *_dataMutationCompletionsByDomain;
    BSMutableIntegerMap *_volatileDataMutationCompletionsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_serverXPCConnection;
    id _serverProxy;
    id /* block */ _xpcConnectionProvider;
    id<STServerLaunchObservable> _serverLaunchObservable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)dealloc;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)didObserveServerLaunch:(id)a0;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)init;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (id)succinctDescription;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (void)replaceDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)initWithXPCConnectionProvider:(id /* block */)a0 serverLaunchObservable:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)replaceVolatileDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
