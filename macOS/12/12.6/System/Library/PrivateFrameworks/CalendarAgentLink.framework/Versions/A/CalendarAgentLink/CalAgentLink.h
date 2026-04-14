@class CalXPCConnectionProvider;

@interface CalAgentLink : NSObject

@property (retain) CalXPCConnectionProvider *connectionProvider;

+ (void)initialize;
+ (id)store;
+ (id)agent;
+ (id)startWithMachServiceName:(id)a0 exportedObject:(id)a1;
+ (id)synchronousAgent;
+ (id)agentWithErrorBlock:(id /* block */)a0;
+ (id)sharedInstanceWithMachServiceName:(id)a0;
+ (void)broadcastNotificationToOtherClients:(id)a0 userInfo:(id)a1 withAgent:(id)a2;
+ (id)clientSideCache;
+ (id)sharedInstances;
+ (void)_removeAgentLink:(id)a0;
+ (id)_registerLightweightClientWithMachServiceName:(id)a0;
+ (id)remoteObjectForMachServiceName:(id)a0 errorBlock:(id /* block */)a1;
+ (id)synchronousAgentWithErrorBlock:(id /* block */)a0;
+ (id)synchronousRemoteObjectForMachServiceName:(id)a0 errorBlock:(id /* block */)a1;
+ (id)storeWithErrorBlock:(id /* block */)a0;
+ (id)addressBookProxyWithErrorBlock:(id /* block */)a0;
+ (id)contactsGeneralProxyWithErrorBlock:(id /* block */)a0;
+ (id)remoteObjectForMachServiceName:(id)a0;
+ (id)addressBookProxy;
+ (id)contactsGeneralProxy;

- (id)init;
- (void).cxx_destruct;
- (void)setExportedObject:(id)a0;
- (id)_remoteObject;
- (BOOL)hasRequiredFields;
- (id)initWithMachServiceName:(id)a0 exportedObject:(id)a1;
- (id)_remoteObjectWithErrorBlock:(id /* block */)a0;
- (id)_synchronousRemoteObjectWithErrorBlock:(id /* block */)a0;

@end
