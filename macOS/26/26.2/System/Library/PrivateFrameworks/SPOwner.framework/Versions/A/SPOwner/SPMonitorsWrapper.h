@class SPNetworkMonitor, SPPowerStateMonitorMac, SPMacBeaconConfig, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>

@property (weak, nonatomic) id<SPMonitorsWrapperDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) SPNetworkMonitor *networkMonitor;
@property (retain, nonatomic) NSDate *lastStateChangeDate;
@property (retain, nonatomic) NSDate *nextStateChangeDate;
@property BOOL isRunning;
@property (retain, nonatomic) NSDate *networkOffDuringSleepDate;
@property (retain, nonatomic) SPPowerStateMonitorMac *powerStateMonitor;
@property (retain, nonatomic) SPMacBeaconConfig *macBeaconConfig;
@property (readonly, nonatomic) BOOL useLegacyMacBeaconing;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } powerStateMonitorLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)powerState;
- (void)pause;
- (void)stop;
- (int)_cpuType;
- (void)resume;
- (void)updateConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithBeaconManager:(id)a0 delegateQueue:(id)a1;
- (void)start;
- (void)powerMonitor:(id)a0 didChangeState:(unsigned long long)a1;
- (id)nextWakeTimeForState:(unsigned long long)a0;
- (BOOL)isNetworkUp;
- (void)calculateLowPowerNetworkOffDate;

@end
