@class SOHelperReceiver, NSMutableDictionary, NSXPCConnection, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SOHelper : NSObject <SOHelperReceiverProtocol>

@property (retain) NSMutableArray *blocksToRunOnConnection;
@property (retain) NSMutableArray *blocksToRunOnFirstDefaultsSync;
@property BOOL defaultsInitalSyncComplete;
@property (retain) NSMutableDictionary *keyToBlocks;
@property (retain) NSObject<OS_dispatch_queue> *helperDispatchQueue;
@property (retain) NSMutableDictionary *controllerProperties;
@property (retain) NSMutableDictionary *controllerDefaults;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) NSString *name;
@property (retain) SOHelperReceiver *receiver;
@property BOOL isSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)bundleName;
+ (id)receiverProtocol;
+ (id)remoteReceiverProtocol;
+ (id)helperDispatchQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateProperties:(id)a0;
- (void)setupConnection:(id)a0;
- (void)postNotification:(id)a0 userInfo:(id)a1;
- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (void)updateDefaultsObject:(id)a0 forKey:(id)a1;
- (void)updateDefaults:(id)a0;
- (void)suspendConnectionWithCompletionBlock:(id /* block */)a0;
- (void)_setupInterfaceForConnection:(id)a0;
- (void)runBlockOnConnection:(id /* block */)a0;
- (id)defaultsObjectForKey:(id)a0 blocking:(BOOL)a1;
- (void)runBlockWhenDefaultsSynced:(id /* block */)a0 onQueue:(id)a1;
- (id)controllerPropertyForKey:(id)a0;
- (void)runBlock:(id /* block */)a0 onKeyChange:(id)a1;
- (void)addDefaultsObject:(id)a0 toCollection:(id)a1;
- (void)removeDefaultsObject:(id)a0 fromCollection:(id)a1;
- (id)defaultsObjectForKey:(id)a0;
- (void)setDefaultsObject:(id)a0 forKey:(id)a1;
- (id)copyControllerPropertyForKey:(id)a0;
- (void)_setControllerProperty:(id)a0 forKey:(id)a1;
- (id)_controllerProperties;
- (id)_helperDispatchQueue;
- (BOOL)blockUntilKeyValueKnown:(id)a0;

@end
