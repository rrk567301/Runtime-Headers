@class NSArray, NSDate;

@interface CKSQLiteCacheTable : CKSQLiteTable {
    BOOL _expirationTimeEnabled;
    BOOL _entryCountLimitEnabled;
    BOOL _dataSizeLimitEnabled;
    NSDate *_cachedOldestExpirationDate;
    unsigned long long _cachedEntryCount;
    unsigned long long _dataSize;
    NSArray *_dataSizeProperties;
    long long _pendingCountChange;
    long long _pendingSizeChange;
    BOOL _isDatabaseAvailable;
    BOOL _inTransaction;
    BOOL _isExpiring;
}

@property (readonly, nonatomic) unsigned long long entryCountLimit;
@property (readonly, nonatomic) unsigned long long dataSizeLimit;
@property (readonly, nonatomic) double cacheExpirationTime;
@property (readonly, nonatomic) double expireDelay;
@property (readonly, nonatomic) NSDate *lastExpireDate;

+ (id)dbProperties;

- (void).cxx_destruct;
- (id)insertObject:(id)a0;
- (id)finishInitializing:(BOOL)a0;
- (id)performTransaction:(id /* block */)a0;
- (id)newEntryObject;
- (unsigned long long)setProperties:(id)a0 valuesToStore:(id)a1 inEntriesMatching:(id)a2 label:(id)a3 error:(id *)a4 predicate:(id /* block */)a5;
- (unsigned long long)deleteEntriesMatching:(id)a0 label:(id)a1 error:(id *)a2 predicate:(id /* block */)a3;
- (id)initWithLogicalTableName:(id)a0 entryCountLimit:(unsigned long long)a1 dataSizeLimit:(unsigned long long)a2 expirationTime:(double)a3 expireDelay:(double)a4;
- (id)oldestFirstEnumerator;
- (void)fetchExpirationDate:(id)a0;
- (id)oldestExpirationDate;
- (void)setEntryCountLimit:(unsigned long long)a0;
- (unsigned long long)expireByCount;
- (void)setDataSizeLimit:(unsigned long long)a0;
- (unsigned long long)expireByDataSize;
- (void)setCacheExpirationTime:(double)a0;
- (unsigned long long)expireByTime:(id)a0;
- (unsigned long long)dataSizeForEntry:(id)a0 error:(id *)a1;
- (void)expire;
- (void)periodicExpire;
- (id)extendExpiration:(id)a0;
- (id)setEntryExpiration:(id)a0 date:(id)a1;

@end
