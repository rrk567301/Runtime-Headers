@class NSNumber, NSDictionary, NSDate, NSObject, CWFScanResult;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFJITTDImpactEstimator : NSObject

@property (nonatomic) long long _rssi;
@property (nonatomic) long long _activity;
@property (retain, nonatomic) CWFScanResult *_tdNetwork;
@property (retain, nonatomic) NSDate *_startTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_timerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (nonatomic) long long _boundaryTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_boundaryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_periodicTimer;
@property (retain, nonatomic) NSNumber *_totalCellularInBytes;
@property (retain, nonatomic) NSNumber *_totalCellularOutBytes;
@property (retain, nonatomic) NSNumber *_totalCellularInPackets;
@property (retain, nonatomic) NSNumber *_totalCellularOutPackets;
@property (retain, nonatomic) NSDate *_lastSubmissionTimePreAJ;
@property (nonatomic) BOOL _legacyAccountingComplete;
@property (retain, nonatomic) NSDate *_lastSubmissionTimePostTD;
@property (retain, nonatomic) NSDictionary *_previousCellularDataUsageInPostTD;
@property (retain, nonatomic) NSDictionary *_cellularDataUsageInLegacyBoundary;
@property (copy) id /* block */ scanForNetworkHandler;
@property (copy) id /* block */ gatherCellularDataStats;

+ (id)initJITTDImpactEstimator;

- (void)invalidate;
- (id)init;
- (id)twoSigFig:(unsigned long long)a0;
- (void)stopAccounting;
- (void).cxx_destruct;
- (void)__stopCellularDataUsageAccountingPostTD;
- (BOOL)canSubmitToCA:(id)a0;
- (void)cancelBoundaryTimer;
- (void)cancelPeriodicTimer;
- (BOOL)checkCellularDataSanity:(id)a0;
- (id)computeDataUsageInCurrentSession:(id)a0;
- (void)gatherCellularDataUsageSoFar:(id)a0;
- (void)issueFullBandScan;
- (void)notifyAJDelayedOnlyDueToJITTD;
- (void)notifyScanResult:(id)a0 withError:(id)a1;
- (void)postCellularDataUsageAccountingPreAJ:(id)a0;
- (void)postCellularDataUsageAccoutingPostTD:(id)a0;
- (void)resetStores;
- (void)setupPeriodicTimerForScan;
- (void)startCellularDataUsageAccountingDelayedAJ:(long long)a0 withMaxRSSI:(long long)a1 forNetwork:(id)a2;
- (void)startCellularDataUsageAccountingPostTD:(id)a0 withMinRSSI:(long long)a1;
- (void)stopCellularDataUsageAccountingDelayedAJ;
- (void)stopCellularDataUsageAccountingPostTD;
- (void)storeCellularDataUsage:(id)a0;

@end
