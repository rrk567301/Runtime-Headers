@class NSMutableDictionary;

@interface IASMultiSourceSessionManager : IASSessionManager

@property (retain, nonatomic) Class analyzerClass;
@property (retain, nonatomic) NSMutableDictionary *analyzerIdToAnalyzerMap;
@property (retain, nonatomic) NSMutableDictionary *sessionIdToAnalyzerIdMap;
@property (retain, nonatomic) NSMutableDictionary *analyzerIdToSessionIdsMap;

- (id)garbageCollect;
- (void).cxx_destruct;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (id)analyzerForAnalyzerID:(id)a0;
- (id)analyzerForSessionID:(id)a0;
- (id)analyzerIdForSessionID:(id)a0;
- (BOOL)associateAnalyticsSessionID:(id)a0 withAnalyzerID:(id)a1;
- (BOOL)createAnalyzerForSessionID:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (id)sessionIDsForAnalyzerID:(id)a0;
- (void)terminateAnalyzerSession:(id)a0;

@end
