@class NSMutableSet, NSString, NSArray, NSXPCConnection, NSSet, NSObject, BSMutableIntegerMap;
@protocol OS_dispatch_queue, STStatusDomainServerHandle;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle> {
    id<STStatusDomainServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_clientHandleWrappersByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_observingDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly, nonatomic) BOOL wantsUntransformedData;

- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void).cxx_destruct;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDomain:(id)a0 withPreferredLocalizations:(id)a1;
- (void)reportUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)serverDataForDomains:(id)a0 preferredLocalizations:(id)a1 reply:(id /* block */)a2;
- (void)stopObservingDomain:(id)a0;

@end
