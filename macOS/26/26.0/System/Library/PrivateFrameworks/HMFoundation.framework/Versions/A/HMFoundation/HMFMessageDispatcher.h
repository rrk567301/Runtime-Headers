@class NSMapTable, NSSet, NSString, NSMutableOrderedSet, HMFMessageTransport, NSObject;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher : HMFObject <HMFMemoryObserver, HMFLogging, HMFMessageTransportDelegate> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMutableOrderedSet *_handlers;
}

@property (retain, nonatomic) NSMapTable *receiverCache;
@property (retain, nonatomic) NSMapTable *msgBindingsCache;
@property BOOL didRegisterWithMemoryMonitor;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ resolveHook;
@property (readonly, nonatomic) HMFMessageTransport *transport;
@property (copy) NSSet *filterClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)flushReceiverFromCache:(id)a0;
- (void)memoryMonitor:(id)a0 didReceiveMemoryEvent:(long long)a1;
- (void)_configureMemoryPressureHandler;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)deregisterForMessage:(id)a0 receiver:(id)a1;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3;
- (id)messageRegistrationsForReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (id)messageHandlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (id)messageBindingForReceiver:(id)a0 forMessage:(id)a1;
- (id)init;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)sendMessageExpectingResponse:(id)a0;
- (id)receiverForTarget:(id)a0;
- (id)synthesizeHandlerForMessage:(id)a0;
- (id)handlersForMessage:(id)a0;
- (void)sendMessage:(id)a0 target:(id)a1 andInvokeCompletionHandler:(id /* block */)a2;
- (void)__registerHandler:(id)a0;
- (void)deregisterReceiver:(id)a0;
- (id)initWithTransport:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 selector:(SEL)a2;
- (void)makeSureToRegisterWithMemoryMonitor;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 target:(id)a1;

@end
