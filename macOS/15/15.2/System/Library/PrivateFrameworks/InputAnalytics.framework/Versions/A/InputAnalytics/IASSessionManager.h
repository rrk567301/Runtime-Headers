@protocol IASServerAnalyticsDelegate;

@interface IASSessionManager : NSObject <IAXPCProtocol>

@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASServerAnalyticsDelegate> serverDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (id)garbageCollect;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (id)createAnalyzerWithId:(id)a0 class:(Class)a1;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)periodic24HourEvents;
- (void)reportStatus;

@end
