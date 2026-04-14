@class ENAdvertisementSQLiteStore, NSString, ENQueryFilter, NSNumber;

@interface ENAdvertisementDatabase : NSObject {
    struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; } *_advertisementInsertionCache;
    unsigned int _advertisementInsertionCacheCount;
    unsigned int _advertisementInsertionIndex;
    BOOL _advertisementInsertionCacheOverflowed;
    unsigned long long _previousStoreFullAlertTimestamp;
    NSString *_databaseFolderPath;
    ENAdvertisementSQLiteStore *_centralStore;
    ENAdvertisementSQLiteStore *_temporaryStore;
    id /* block */ _errorMetricReporter;
}

@property (readonly, nonatomic) unsigned long long currentStoreType;
@property (readonly, nonatomic) BOOL temporaryStoresPresent;
@property (retain, nonatomic) ENQueryFilter *inlineQueryFilter;
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;
@property (readonly, nonatomic) unsigned long long droppedAdvertisementCount;
@property (nonatomic) double storageFullAlertInterval;

+ (BOOL)purgeAllStoresInPath:(id)a0;

- (id)matchingAdvertisementBufferForRPIBuffer:(id)a0 exposureKeys:(id)a1;
- (id)createQuerySessionWithAttenuationThreshold:(unsigned char)a0 queue:(id)a1 error:(id *)a2;
- (void)reportStoreError:(id)a0;
- (void)dealloc;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1 errorMetricReporter:(id /* block */)a2;
- (BOOL)openCentralStoreAndReturnError:(id *)a0;
- (void)reportErrorMetric:(unsigned int)a0;
- (BOOL)mergeStores:(id)a0;
- (BOOL)purgeAllStoresInActiveDatabasePath;
- (id)init;
- (id)beaconCountMetricsWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (void)displayStorageFullAlert;
- (BOOL)mergeTemporaryStores;
- (id)currentStore;
- (id)advertisementsBufferMatchingDailyKeys:(id)a0 attenuationThreshold:(unsigned char)a1 timestampTolerance:(double)a2;
- (BOOL)mergeStoresFromFolderPath:(id)a0;
- (BOOL)openTemporaryStore;
- (BOOL)flushCache;
- (id)queryFilterWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1 attenuationThreshold:(unsigned char)a2;
- (unsigned int)cacheRecordCount;
- (BOOL)switchToCentralStore;
- (void)closeAllStores;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1;
- (BOOL)purgeAdvertismentsOlderThan:(double)a0;
- (BOOL)saveContactTracingAdvertisement:(id)a0;
- (BOOL)cloneDatabaseTo:(id)a0;
- (BOOL)purgeAdvertismentsSeenBeforeDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)openStoreAndReturnError:(id *)a0;

@end
