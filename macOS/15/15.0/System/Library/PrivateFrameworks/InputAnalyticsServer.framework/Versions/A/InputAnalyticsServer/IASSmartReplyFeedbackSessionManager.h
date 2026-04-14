@class NSSet, NSMutableDictionary;

@interface IASSmartReplyFeedbackSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *sessionIdAnalyzerIdMap;
@property (retain, nonatomic) NSMutableDictionary *analyzerIdSessionIdsMap;
@property (retain, nonatomic) NSSet *subscribedChannels;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (id)garbageCollect;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)reportStatus;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)terminateAnalyzerSession:(id)a0;

@end
