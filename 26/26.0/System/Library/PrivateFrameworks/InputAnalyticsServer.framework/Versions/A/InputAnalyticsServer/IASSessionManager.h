@class NSObject;
@protocol IASServerAnalyticsDelegate, OS_dispatch_queue;

@interface IASSessionManager : NSObject <IXAXPCProtocol>

@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASServerAnalyticsDelegate> serverDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)logMessage:(id)a0;
- (id)garbageCollect;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (id)createAnalyzerWithId:(id)a0 class:(Class)a1;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;

@end
