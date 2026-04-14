@class NSMutableDictionary;

@interface IASWritingToolsSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *sessionIdAnalyzerIdMap;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)reportStatus;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;

@end
