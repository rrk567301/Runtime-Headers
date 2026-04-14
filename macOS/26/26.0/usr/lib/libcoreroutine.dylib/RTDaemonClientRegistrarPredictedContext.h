@class RTInvocationDispatcher, NSString, RTPredictedContextManager, RTPredictedContextOptions, NSObject;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarPredictedContextProtocol;

@interface RTDaemonClientRegistrarPredictedContext : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTPredictedContextManager *predictedContextManager;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) RTPredictedContextOptions *options;
@property (copy, nonatomic) NSString *clientIdentity;
@property (weak, nonatomic) id<RTDaemonClientRegistrarPredictedContextProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (long long)countOfPendingInvocations;
- (BOOL)invocationsPending;
- (id)initWithCoder:(id)a0;
- (BOOL)registered;
- (void).cxx_destruct;
- (void)addPendingPredictedContextUpdateBlock:(id /* block */)a0 failBlock:(id /* block */)a1 description:(id)a2;
- (id)initWithPredictedContextManager:(id)a0 queue:(id)a1 clientIdentity:(id)a2;
- (BOOL)startMonitoringForPredictedContextWithOptions:(id)a0 error:(id *)a1;
- (void)stopMonitoringForPredictedContext;

@end
