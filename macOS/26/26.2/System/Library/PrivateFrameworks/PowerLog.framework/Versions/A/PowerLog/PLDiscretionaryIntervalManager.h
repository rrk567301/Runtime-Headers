@class PLDiscretionaryEnergyMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface PLDiscretionaryIntervalManager : NSObject

@property (retain) NSMutableDictionary *identifierToDiscretionaryIntervals;
@property (retain) NSMutableDictionary *activityNameToInvolvedIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *openIntervalTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogReportTimer;
@property (weak, nonatomic) PLDiscretionaryEnergyMonitor *discretionaryEnergyMonitor;
@property (nonatomic) BOOL quickEnergyEnabled;
@property (retain) NSMutableDictionary *mockData;

- (void)handleStopEvent:(id)a0 withInfo:(id)a1;
- (id)coalesceIntervals:(id)a0;
- (void)handleStartEvent:(id)a0 withInfo:(id)a1;
- (void)logActivityNameToInvolvedIdentifiers;
- (id)initWithEnergyMonitor:(id)a0 andMockData:(id)a1;
- (void)reportIntervalsToPowerlog;
- (void)handleOpenIntervalTimer;
- (void)logDiscretionaryIntervals;
- (void).cxx_destruct;
- (void)disableQuickEnergy;
- (void)handlePowerlogReportTimer;
- (void)reportQuickEnergyForInterval:(id)a0 withIdentifier:(id)a1 andAdjustSnapshotToNow:(BOOL)a2;
- (void)enableQuickEnergy;
- (id)createOpenIntervalTimer;
- (id)createPowerlogReportTimer;

@end
