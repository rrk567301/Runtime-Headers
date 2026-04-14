@class HMFMessageDispatcher, NSString, HMDHome, NSOperationQueue, NSMapTable;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
}

@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) BOOL shouldRelayMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addOperation:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)operationForMessage:(id)a0 error:(id *)a1;
- (id)messageBindingForMessageWithName:(id)a0 policies:(id)a1 selector:(SEL)a2 isThisResidentCapableDevice:(BOOL)a3;
- (id)initWithHome:(id)a0 dispatcher:(id)a1;
- (id)initWithHome:(id)a0;
- (BOOL)allowLocalFallbackForMessage:(id)a0;
- (id)syncOperationManager;
- (BOOL)shouldRelayMessage:(id)a0;
- (id)wrapReceiver:(id)a0;
- (id)logIdentifier;
- (id)messageBindingForMessageWithName:(id)a0 policies:(id)a1 selector:(SEL)a2;
- (void)deregisterReceiver:(id)a0;
- (id)initWithTransport:(id)a0;
- (void).cxx_destruct;

@end
