@interface WiFiScanStatistics : NSObject

@property (nonatomic) unsigned long long client;
@property (nonatomic) int err;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) unsigned long long failureCount;
@property (nonatomic) unsigned long long is2GScan;
@property (nonatomic) unsigned long long is2GScanScanCore;
@property (nonatomic) unsigned long long is5GScan;
@property (nonatomic) unsigned long long is5GScanScanCore;
@property (nonatomic) unsigned long long is6GScan;
@property (nonatomic) unsigned long long is6GScanScanCore;
@property (nonatomic) unsigned long long scanDuration2G;
@property (nonatomic) unsigned long long scanDuration5G;
@property (nonatomic) unsigned long long scanDuration6G;
@property (nonatomic) unsigned long long scanCore2GScanDuration;
@property (nonatomic) unsigned long long scanCore5GScanDuration;
@property (nonatomic) unsigned long long scanCore6GScanDuration;
@property (nonatomic) unsigned long long scanDurationAllBands;
@property (nonatomic) unsigned long long scanCoreScanDurationAllBands;

- (id)twoSigFig:(unsigned long long)a0;
- (void)reset;
- (id)initForClient:(unsigned long long)a0;
- (unsigned long long)add:(unsigned long long)a0 with:(unsigned long long)a1;
- (BOOL)aggregateValues:(id)a0;
- (id)gatherDataToBePosted:(BOOL)a0;
- (void)postDailyScanMetricsToCA;
- (void)postIndividualScanMetricsToCA;

@end
