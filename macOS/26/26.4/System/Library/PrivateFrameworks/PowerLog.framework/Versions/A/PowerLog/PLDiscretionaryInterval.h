@class PLCPUEnergySnapshot, PLNetworkUsageSnapshot, NSDate;

@interface PLDiscretionaryInterval : NSObject

@property (retain) NSDate *originalStartDate;
@property (retain) NSDate *currentStartDate;
@property (retain) NSDate *endDate;
@property (retain) PLCPUEnergySnapshot *cpuEnergySnapshot;
@property (retain) PLNetworkUsageSnapshot *networkEnergySnapshot;
@property double startCount;
@property double openCount;

- (BOOL)isClosed;
- (id)initWithIdentifier:(id)a0 andInfo:(id)a1 andSnapshottingEnabled:(BOOL)a2 andMockData:(id)a3;
- (void).cxx_destruct;
- (double)checkOpenIntervalDuration:(id)a0;
- (id)description;
- (void)closeInterval;
- (BOOL)shouldClose;

@end
