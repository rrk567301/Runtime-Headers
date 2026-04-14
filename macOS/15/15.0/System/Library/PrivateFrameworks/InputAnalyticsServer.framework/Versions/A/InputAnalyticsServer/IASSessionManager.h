@class NSArray, NSMutableDictionary;
@protocol IASServerAnalyticsDelegate;

@interface IASSessionManager : NSObject <IAXPCProtocol>

@property (retain, nonatomic) NSArray *analyzerClasses;
@property (retain, nonatomic) NSMutableDictionary *analyzers;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASServerAnalyticsDelegate> serverDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (id)garbageCollect;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)reportStatus;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (void)didActionWithSessionMetadata:(id)a0 withDictionary:(id)a1;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)terminateAnalyzerSession:(id)a0;

@end
