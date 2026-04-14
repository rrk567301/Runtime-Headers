@class NSXPCListenerEndpoint, NSString, NSXPCConnection, LBAudioStreamConsumerConfiguration, NSError, NSObject, CSStateMachine;
@protocol OS_dispatch_queue, LBAudioStreamConsumingDelegate;

@interface LBAudioStreamConsumer : NSObject <CSStateMachineDelegate, LBAudioStreamConsumerServiceDelegate, LBAudioStreamConsuming>

@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;
@property (retain, nonatomic) CSStateMachine *stateMachine;
@property (retain, nonatomic) LBAudioStreamConsumerConfiguration *configuration;
@property (retain, nonatomic) NSError *stopError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isConsumingStream;
@property (weak, nonatomic) id<LBAudioStreamConsumingDelegate> streamConsumerDelegate;

- (id)_connection;
- (id)initWithDelegate:(id)a0;
- (id)_stateName:(unsigned long long)a0;
- (void)_invalidate;
- (void)didIgnoreEvent:(long long)a0 from:(long long)a1;
- (void).cxx_destruct;
- (id)_newConnection;
- (id)_eventName:(unsigned long long)a0;
- (void)didTransitFrom:(long long)a0 to:(long long)a1 by:(long long)a2;
- (void)_setupStateMachine;
- (id)_service;
- (void)_cleanupStreamInfo;
- (void)_consumePackets:(id)a0 completion:(id /* block */)a1;
- (void)_didStopConsumingForRequestId:(id)a0 withError:(id)a1;
- (void)_interruptionHandler:(id)a0;
- (void)_invalidationHandler:(id)a0;
- (void)_notifyDelegateDidStopWithError:(id)a0;
- (void)_startConsumingWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_stopConsumingWithCompletion:(id /* block */)a0;
- (void)consumePackets:(id)a0 completion:(id /* block */)a1;
- (oneway void)didStopConsumingForRequestId:(id)a0 withError:(id)a1;
- (id)initWithDelegate:(id)a0 xpcListenerEndpoint:(id)a1;
- (void)setConsumingDelegate:(id)a0;
- (void)startConsumingWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)stopConsumingWithCompletion:(id /* block */)a0;

@end
