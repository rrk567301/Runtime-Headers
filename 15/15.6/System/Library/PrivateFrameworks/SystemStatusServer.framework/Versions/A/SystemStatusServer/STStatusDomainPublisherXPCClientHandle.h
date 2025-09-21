@class NSString, NSXPCConnection, NSSet, NSMutableSet, NSObject, BSMutableIntegerMap;
@protocol OS_dispatch_queue, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle> {
    id<STStatusDomainPublisherServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_volatileDataByDomain;
    BSMutableIntegerMap *_fallbackDataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_publishingDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)publishData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2 discardingOnExit:(char)a3 reply:(id /* block */)a4;
- (void)unregisterFromPublishingDomain:(unsigned long long)a0;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void)publishDiff:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2 replacingData:(char)a3 discardingOnExit:(char)a4 reply:(id /* block */)a5;
- (void)registerToPublishDomain:(unsigned long long)a0 fallbackData:(id)a1;
- (void)replaceDataChangeRecord:(id)a0 discardingOnExit:(char)a1 reply:(id /* block */)a2;

@end
