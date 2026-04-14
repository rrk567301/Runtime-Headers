@class NSArray, NSString, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *hardFailures;
@property (readonly) NSArray *softFailures;
@property (readonly) NSArray *rockwells;
@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *samples;
@property (readonly) NSString *databaseBasename;
@property (retain) NSDate *uploadDate;
@property (retain) NSString *metricsAccountID;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (void)setDataProperty:(id)a0 forKey:(id)a1;
- (void)incrementHardFailureCountForEventType:(id)a0;
- (long long)successCountForEventType:(id)a0;
- (void)addEventDict:(id)a0 toTable:(id)a1;
- (long long)softFailureCountForEventType:(id)a0;
- (void)removeAllSamplesForName:(id)a0;
- (void)streamEventsWithLimit:(id)a0 fromTable:(id)a1 eventHandler:(id /* block */)a2;
- (id)summaryCounts;
- (void)incrementSoftFailureCountForEventType:(id)a0;
- (long long)hardFailureCountForEventType:(id)a0;
- (id)dataPropertyForKey:(id)a0;
- (void)incrementSuccessCountForEventType:(id)a0;
- (void)addEventDict:(id)a0 toTable:(id)a1 timestampBucket:(unsigned int)a2;
- (void)addSample:(id)a0 forName:(id)a1;
- (void)dealloc;
- (BOOL)tryToOpenDatabase;
- (void)clearAllData;
- (void)addRockwellDict:(id)a0 userinfo:(id)a1 toTable:(id)a2 timestampBucket:(unsigned int)a3;

@end
