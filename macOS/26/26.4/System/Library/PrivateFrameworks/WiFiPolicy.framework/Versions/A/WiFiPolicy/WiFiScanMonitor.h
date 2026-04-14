@class WiFiScanStatisticsAggregator;

@interface WiFiScanMonitor : NSObject

@property (retain, nonatomic) WiFiScanStatisticsAggregator *scanAggregator;

+ (id)sharedScanMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)gatherScanStatisticsForClient:(unsigned long long)a0 error:(int)a1 is2GScan:(BOOL)a2 is2GScanScanCore:(BOOL)a3 is5GScan:(BOOL)a4 is5GScanScanCore:(BOOL)a5 is6GScan:(BOOL)a6 is6GScanScanCore:(BOOL)a7 scanDuration2G:(unsigned long long)a8 scanDuration5G:(unsigned long long)a9 scanDuration6G:(unsigned long long)a10 scanCore2GScanDuration:(unsigned long long)a11 scanCore5GScanDuration:(unsigned long long)a12 scanCore6GScanDuration:(unsigned long long)a13;

@end
