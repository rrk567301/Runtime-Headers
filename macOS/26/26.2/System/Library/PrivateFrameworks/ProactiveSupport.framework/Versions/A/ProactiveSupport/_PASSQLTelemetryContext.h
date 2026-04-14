@class NSString, NSDictionary, _PASBloomFilterForWriting, _PASBloomFilterHashArray;

@interface _PASSQLTelemetryContext : NSObject {
    struct sqlite3 { } *_dbConnection;
    NSString *_sql;
    NSString *_targetProcess;
    NSString *_sqlEventsLog;
    BOOL _filterPii;
    BOOL _shouldSendTelemetry;
    NSDictionary *_eventToStringMap;
    _PASBloomFilterForWriting *_bloomFilter;
    _PASBloomFilterHashArray *_bloomHashes;
}

@property (copy, nonatomic) id /* block */ authorizerStatusBlock;

- (id)currentProcessName;
- (void).cxx_destruct;
- (void)createEventLogForQueryOpCode:(int)a0 argumentOneValue:(id)a1 argumentTwoValue:(id)a2;
- (BOOL)isTargetProcess;
- (void)applyCallbackWithCompletion:(id /* block */)a0;
- (id)bloomHashArray;
- (id)bloomfilter;
- (id)currentTargetName;
- (BOOL)filterLog:(id)a0;
- (id)initWithConnection:(struct sqlite3 { } *)a0 sqlQuery:(id)a1 filterPii:(BOOL)a2 bloomFilter:(id)a3 bloomHashes:(id)a4;
- (id)initWithConnectionAndSettings:(struct sqlite3 { } *)a0 sqlQuery:(id)a1 filterPii:(BOOL)a2 bloomFilter:(id)a3 bloomHashes:(id)a4 targetProcess:(id)a5;
- (BOOL)isSqlConst;
- (BOOL)isSqlValidLength;
- (void)removeCallback;
- (void)resetLog;
- (void)sendTelemetry:(id)a0;
- (id)sqlEventLogForTelemetry;
- (id)sqlEventLogRaw;

@end
