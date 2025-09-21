@class AXAccessQueue, NSMutableDictionary, NSMutableArray, NSHashTable, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, BSServiceConnectionClient;

@interface AXUIClientConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serverConnectionLock;
}

@property (retain, nonatomic) AXAccessQueue *connectionAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *registeredClients;
@property (retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue;
@property (retain, nonatomic) NSHashTable *stateObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateObserverQueue;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *serviceConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *serviceRequests;
@property (nonatomic) long long connectionState;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;

+ (id)sharedClientConnection;

- (void)cleanUp;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (void)dealloc;
- (void)unregisterClient:(id)a0 withIdentifier:(id)a1;
- (void)performLaunchAngelQueuedTasks;
- (void)unregisterConnectionStateObserver:(id)a0;
- (void)_initializeServiceConnection;
- (id)init;
- (void)performLaunchAngelTask:(id /* block */)a0;
- (oneway void)sendBoardServiceMessage:(id)a0 callback:(id /* block */)a1;
- (void)_broadcastConnectedStateChange;
- (void)tearDownConnection;
- (void)_processXPCReply:(id)a0 context:(id)a1;
- (id)_clientWithIdentifier:(id)a0;
- (void)registerConnectionStateObserver:(id)a0;
- (void).cxx_destruct;

@end
