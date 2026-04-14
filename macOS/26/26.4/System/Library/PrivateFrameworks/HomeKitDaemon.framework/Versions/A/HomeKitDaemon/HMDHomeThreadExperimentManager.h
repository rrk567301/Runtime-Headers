@class HMFTimer, HMDHomeManager, NSMutableDictionary, NSNotificationCenter, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomeThreadExperimentManager : NSObject <HMFTimerDelegate, HMFLogging>

@property (retain, nonatomic) HMFTimer *experimentTimer;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSMutableSet *notificationSet;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long experimentMode;
@property (retain, nonatomic) NSMutableDictionary *experiments;
@property (readonly, nonatomic) BOOL isManualExperiment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)handleNotifiedXPCClientsOfHomeConfigurationChangeNotification:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void)setup;
- (void).cxx_destruct;
- (id)primaryHome;
- (void)_handleCharacteristicsChangedPayload:(id)a0;
- (void)_incrementNotificationCount:(id)a0;
- (void)_incrementReadCount:(id)a0;
- (void)_readThreadExperimentWithAccessory:(id)a0 characteristic:(id)a1 startSeq:(unsigned int)a2 startTime:(double)a3;
- (void)_setLatencyWithIdentifier:(id)a0 latency:(double)a1;
- (void)enableTestDataNotificationWithAccessory:(id)a0 characteristic:(id)a1;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)initializedMetricsBufferWithIdentifier:(id)a0 home:(id)a1;
- (BOOL)isExperimentEnabled:(id)a0;
- (void)performRepeatedExperiment:(id)a0;
- (void)processPreviousExperiment;
- (void)readRemoteHostnameWithWithAccessory:(id)a0 characteristic:(id)a1 completionHandler:(id /* block */)a2;
- (void)scheduleRepeatedExperiment;
- (void)startExperimentWithAccessory:(id)a0 characteristic:(id)a1;

@end
