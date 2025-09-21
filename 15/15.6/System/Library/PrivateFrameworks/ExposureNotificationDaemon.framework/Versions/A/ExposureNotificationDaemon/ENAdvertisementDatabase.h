@class ENAdvertisementSQLiteStore, NSString, ENQueryFilter, NSNumber;

@interface ENAdvertisementDatabase : NSObject {
    struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; } *_advertisementInsertionCache;
    unsigned int _advertisementInsertionCacheCount;
    unsigned int _advertisementInsertionIndex;
    char _advertisementInsertionCacheOverflowed;
    unsigned long long _previousStoreFullAlertTimestamp;
    NSString *_databaseFolderPath;
    ENAdvertisementSQLiteStore *_centralStore;
    ENAdvertisementSQLiteStore *_temporaryStore;
    id /* block */ _errorMetricReporter;
}

@property (readonly, nonatomic) unsigned long long currentStoreType;
@property (readonly, nonatomic) char temporaryStoresPresent;
@property (retain, nonatomic) ENQueryFilter *inlineQueryFilter;
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;
@property (readonly, nonatomic) unsigned long long droppedAdvertisementCount;
@property (nonatomic) double storageFullAlertInterval;

+ (char)purgeAllStoresInPath:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)flushCache;
- (void)closeAllStores;
- (char)openCentralStoreAndReturnError:(id *)a0;
- (id)advertisementsBufferMatchingDailyKeys:(id)a0 attenuationThreshold:(unsigned char)a1 timestampTolerance:(double)a2;
- (id)beaconCountMetricsWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (unsigned int)cacheRecordCount;
- (char)cloneDatabaseTo:(id)a0;
- (id)createQuerySessionWithAttenuationThreshold:(unsigned char)a0 queue:(id)a1 error:(id *)a2;
- (id)currentStore;
- (void)displayStorageFullAlert;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1 errorMetricReporter:(id /* block */)a2;
- (id)matchingAdvertisementBufferForRPIBuffer:(id)a0 exposureKeys:(id)a1;
- (char)mergeStores:(id)a0;
- (char)mergeStoresFromFolderPath:(id)a0;
- (char)mergeTemporaryStores;
- (char)openStoreAndReturnError:(id *)a0;
- (char)openTemporaryStore;
- (char)purgeAdvertismentsOlderThan:(double)a0;
- (char)purgeAdvertismentsSeenBeforeDate:(id)a0;
- (char)purgeAllStoresInActiveDatabasePath;
- (id)queryFilterWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1 attenuationThreshold:(unsigned char)a2;
- (void)reportErrorMetric:(unsigned int)a0;
- (void)reportStoreError:(id)a0;
- (char)saveContactTracingAdvertisement:(id)a0;
- (char)switchToCentralStore;

@end
