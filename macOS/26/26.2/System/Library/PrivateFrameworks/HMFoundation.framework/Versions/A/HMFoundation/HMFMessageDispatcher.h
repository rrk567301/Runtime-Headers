@class NSMutableOrderedSet, NSMapTable, NSSet, NSArray, NSString, HMFMessageTransport, NSObject;
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
@property (copy) NSArray *orderedFilterClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)receiverForTarget:(id)a0;
- (void)__registerHandler:(id)a0;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3;
- (void)_configureMemoryPressureHandler;
- (id)messageRegistrationsForReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (id)initWithTransport:(id)a0;
- (void)memoryMonitor:(id)a0 didReceiveMemoryEvent:(long long)a1;
- (id)handlersForMessage:(id)a0;
- (void)makeSureToRegisterWithMemoryMonitor;
- (void)deregisterReceiver:(id)a0;
- (id)sendMessageExpectingResponse:(id)a0;
- (void)sendMessage:(id)a0 target:(id)a1 andInvokeCompletionHandler:(id /* block */)a2;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (id)synthesizeHandlerForMessage:(id)a0;
- (void)flushReceiverFromCache:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 selector:(SEL)a2;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)messageHandlerWithReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0 target:(id)a1;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)sendMessage:(id)a0;
- (void)deregisterForMessage:(id)a0 receiver:(id)a1;
- (id)messageBindingForReceiver:(id)a0 forMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
