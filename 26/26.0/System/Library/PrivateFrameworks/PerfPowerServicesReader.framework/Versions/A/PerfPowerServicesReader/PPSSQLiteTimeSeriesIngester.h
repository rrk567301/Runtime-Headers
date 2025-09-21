@class PPSRequestDispatcher, NSString, NSURL, NSCache;

@interface PPSSQLiteTimeSeriesIngester : NSObject <NSCacheDelegate, PPSDataIngesterProtocol>

@property (class, readonly) NSCache *databaseConnectionCache;

@property (retain) NSCache *responseCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL shouldUseCache;
@property (readonly) NSURL *filepath;
@property (retain) PPSRequestDispatcher *dispatcher;

+ (void)cache:(id)a0 willEvictObject:(id)a1;
+ (id)databaseQueue;
+ (void)evicttriggering;
+ (id)filterTimeSeries:(id)a0 withPredicate:(id)a1;
+ (unsigned long long)_hashForStringArray:(id)a0;
+ (id)_stringForSourceNames:(id)a0 metrics:(id)a1 predicate:(id)a2;
+ (id)cachedDatabaseForURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0;
- (id)_convertSQLiteDataFromQuery:(id)a0 withMetricDefinitions:(id)a1 error:(id *)a2;
- (id)_validBaseMetricFromDefinitions:(id)a0;
- (id)parseDataForRequest:(id)a0 outError:(id *)a1;
- (void)removeResponseForKey:(id)a0;
- (id)responseForKey:(id)a0 withinTimeWindow:(id)a1;
- (void)setResponse:(id)a0 forKey:(id)a1 timeWindow:(id)a2;

@end
