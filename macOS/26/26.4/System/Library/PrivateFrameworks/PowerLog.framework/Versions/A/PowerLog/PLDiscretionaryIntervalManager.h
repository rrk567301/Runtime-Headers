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

- (void)handleOpenIntervalTimer;
- (void)disableQuickEnergy;
- (void)handlePowerlogReportTimer;
- (id)createOpenIntervalTimer;
- (id)initWithEnergyMonitor:(id)a0 andMockData:(id)a1;
- (id)coalesceIntervals:(id)a0;
- (void).cxx_destruct;
- (void)logDiscretionaryIntervals;
- (void)reportIntervalsToPowerlog;
- (void)logActivityNameToInvolvedIdentifiers;
- (void)handleStartEvent:(id)a0 withInfo:(id)a1;
- (void)reportQuickEnergyForInterval:(id)a0 withIdentifier:(id)a1 andAdjustSnapshotToNow:(BOOL)a2;
- (void)enableQuickEnergy;
- (id)createPowerlogReportTimer;
- (void)handleStopEvent:(id)a0 withInfo:(id)a1;

@end
