@class IASPriorityQueue, NSObject;
@protocol IASAnalyticsServerDelegateProtocol, OS_dispatch_source, OS_dispatch_queue, IASAnalyticsTestingDelegateProtocol;

@interface IASSessionManager : NSObject <IXAXPCProtocol>

@property (retain, nonatomic) IASPriorityQueue *signalBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *bufferTimer;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASAnalyticsServerDelegateProtocol> serverDelegate;
@property (weak, nonatomic) id<IASAnalyticsTestingDelegateProtocol> testingDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double signalProcessingInterval;
@property (nonatomic) BOOL signalProcessingEnabled;

- (id)garbageCollect;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (id)createTimerWithDelay:(double)a0 handler:(id /* block */)a1;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (void)bufferAction:(id)a0;
- (id)createAnalyzerWithId:(id)a0 class:(Class)a1;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;
- (void)processBufferWithFlush:(BOOL)a0;
- (void)scheduleSignalProcessing;

@end
