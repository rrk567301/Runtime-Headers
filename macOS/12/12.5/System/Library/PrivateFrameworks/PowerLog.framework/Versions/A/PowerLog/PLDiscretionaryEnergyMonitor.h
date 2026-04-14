@class PLDiscretionaryIntervalManager, NSDictionary, NSMutableDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PLDiscretionaryEnergyMonitor : NSObject

@property (retain) PLDiscretionaryIntervalManager *intervalManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double lastReportedTotalEnergy;
@property (nonatomic) double lastReportedCPUEnergy;
@property (nonatomic) double lastReportedNetworkEnergy;
@property (retain, nonatomic) NSDictionary *lastPowerlogResponse;
@property (retain, nonatomic) NSMutableArray *quickEnergySnapshots;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogQueryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *quickEnergyAccumulatorTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property double accumulatedCPUEnergy;
@property double accumulatedNetworkEnergy;
@property double powerlogEnergyDiff;
@property (retain) NSDate *powerlogTimestampPrevious;
@property (retain) NSDate *powerlogTimestampLast;
@property double powerlogEnergyPrevious;
@property double powerlogEnergyLast;
@property BOOL isCharging;
@property BOOL debugMode;
@property (retain) NSMutableDictionary *mockData;

+ (double)getDiscretionaryEnergyBudget;

- (void).cxx_destruct;
- (void)incrementCPUEnergy:(double)a0;
- (void)incrementNetworkEnergy:(double)a0;
- (id)initWithDebugMode:(BOOL)a0 andMockData:(id)a1 andCompletionBlock:(id /* block */)a2;
- (void)setupNotificationListeners;
- (id)createPowerlogQueryTimer;
- (id)createQuickEnergyAccumulatorTimer;
- (void)queryPowerlogForDiscretionaryEnergy;
- (void)accumulateQuickEnergy;
- (void)runCompletionBlockWithEnergyResponse:(id)a0;
- (void)logEnergyReport:(id)a0;
- (void)logPowerlogResponse:(id)a0;
- (double)getPowerlogEnergySum:(id)a0;
- (void)generateEnergyReport;
- (void)reportStartEvent:(id)a0 withInfo:(id)a1;
- (void)reportStopEvent:(id)a0 withInfo:(id)a1;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (void)reportChargingStatus:(BOOL)a0;
- (void)testHighVolumeStartStopReporting:(id)a0 withInfo:(id)a1 withNumIterations:(double)a2;
- (void)setStateForNotification:(id)a0 withState:(id)a1;
- (void)updateMockData:(id)a0;
- (void)logQuickEnergySnapshots;

@end
