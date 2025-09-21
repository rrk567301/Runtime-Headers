@class PLCPUEnergySnapshot, PLNetworkUsageSnapshot, NSDate;

@interface PLDiscretionaryInterval : NSObject

@property (retain) NSDate *originalStartDate;
@property (retain) NSDate *currentStartDate;
@property (retain) NSDate *endDate;
@property (retain) PLCPUEnergySnapshot *cpuEnergySnapshot;
@property (retain) PLNetworkUsageSnapshot *networkEnergySnapshot;
@property double startCount;
@property double openCount;

- (id)description;
- (void).cxx_destruct;
- (char)isClosed;
- (double)checkOpenIntervalDuration:(id)a0;
- (void)closeInterval;
- (id)initWithIdentifier:(id)a0 andInfo:(id)a1 andSnapshottingEnabled:(char)a2 andMockData:(id)a3;
- (char)shouldClose;

@end
