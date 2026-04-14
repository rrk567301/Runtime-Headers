@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle>

@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *clientsByDomain;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (readonly, copy, nonatomic) id /* block */ xpcConnectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)_tearDownXPCConnection;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;
- (id)_internalQueue_dataForDomain:(unsigned long long)a0;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1;
- (void)_reregisterForDomains;
- (void)observeDiff:(id)a0 forDomain:(unsigned long long)a1;
- (id)dataForDomain:(unsigned long long)a0;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;

@end
