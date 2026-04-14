@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue, STServerLaunchObservable;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, STServerLaunchObserver, BSDescriptionProviding, STStatusDomainServerHandle> {
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_clientsByDomain;
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

- (id)initWithXPCConnectionProvider:(id /* block */)a0 serverLaunchObservable:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)didObserveServerLaunch:(id)a0;
- (id)dataForDomain:(unsigned long long)a0 client:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDiff:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (id)serverDataForDomains:(id)a0 preferredLocalizations:(id)a1;

@end
