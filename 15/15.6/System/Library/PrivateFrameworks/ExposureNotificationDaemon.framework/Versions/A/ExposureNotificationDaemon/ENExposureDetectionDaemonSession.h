@class ENRegionServerConfiguration, ENExposureDatabase, ENExposureConfiguration, NSDate, ENRegionServerExposureConfiguration, NSObject, ENRegionConfiguration, ENExposureClassification, ENAdvertisementDatabaseQuerySession, ENExposureDetectionHistorySession, ENExposureCalculationSession, ENXPCClient, ENExposureDetectionDaemonSessionStatistics;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionDaemonSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _signpostID;
    ENExposureDetectionDaemonSessionStatistics *_statistics;
    char _finished;
    char _prepared;
    char _shouldCopyStatistics;
    char _useCache;
}

@property (retain, nonatomic) ENAdvertisementDatabaseQuerySession *advertisementDatabaseQuerySession;
@property (retain, nonatomic) ENXPCClient *client;
@property (retain, nonatomic) ENExposureConfiguration *clientExposureConfiguration;
@property (retain, nonatomic) ENExposureDatabase *exposureDatabase;
@property (retain, nonatomic) ENExposureClassification *previousExposureClassification;
@property (copy, nonatomic) ENRegionConfiguration *regionConfiguration;
@property (copy, nonatomic) ENRegionServerConfiguration *regionServerConfiguration;
@property (copy, nonatomic) ENRegionServerExposureConfiguration *serverExposureConfiguration;
@property (copy, nonatomic) NSDate *sessionDate;
@property (readonly, nonatomic) ENExposureDetectionHistorySession *historySession;
@property (readonly, copy, nonatomic) ENExposureConfiguration *sessionExposureConfiguration;
@property (nonatomic) unsigned long long tekMatchBatchSize;
@property (readonly, copy, nonatomic) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (nonatomic) char skipFileSigningVerification;
@property (readonly, nonatomic) ENExposureCalculationSession *exposureCalculationSession;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (char)prepareAndReturnError:(id *)a0;
- (id)finishAndReturnError:(id *)a0;
- (void)_signpostBegin;
- (void)_signpostEnd;
- (void)_addFileToHistoryWithHash:(id)a0 metadata:(id)a1 endpoint:(id)a2 keyCount:(unsigned long long)a3 matchCount:(unsigned long long)a4;
- (char)_addMatchesFromFileSession:(id)a0 publicKey:(id)a1 endpoint:(id)a2 error:(id *)a3;
- (char)_checkFinishedAndReturnError:(id *)a0;
- (char)_checkPreparedAndReturnError:(id *)a0;
- (char)_classifyExposureWithResult:(id)a0 error:(id *)a1;
- (id)_finishAndReturnError:(id *)a0;
- (id)_getAnalysisSessionAndReturnError:(id *)a0;
- (id)_getBeaconCountMetricsAndReturnError:(id *)a0;
- (id)_getSummaryAndReturnError:(id *)a0;
- (char)_prepareAndReturnError:(id *)a0;
- (id)_prepareExposureCalculationSessionWithError:(id *)a0;
- (char)_shouldMatchPersistenKey:(id)a0;
- (void)_updateStatisticsWithHandler:(id /* block */)a0;
- (char)_verifySignatureForFileSession:(id)a0 publicKey:(id)a1 error:(id *)a2;
- (char)addMatchesFromFileSession:(id)a0 publicKey:(id)a1 endpoint:(id)a2 error:(id *)a3;
- (char)classifyExposureWithResult:(id)a0 error:(id *)a1;
- (id)getAnalysisSessionAndReturnError:(id *)a0;
- (id)getBeaconCountMetricsAndReturnError:(id *)a0;
- (id)getSummaryAndReturnError:(id *)a0;
- (char)prepareConfiguration:(id)a0 bundleIdentifier:(id)a1 nowDate:(id)a2 expiryInterval:(double)a3 error:(id *)a4;

@end
