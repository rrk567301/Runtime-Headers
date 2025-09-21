@class NSString, NSObject;
@protocol OS_dispatch_queue, SPPowerMonitorDelegate;

@interface SPPowerStateMonitorMac : NSObject <SPPowerStateMonitor>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) unsigned long long internal_state;
@property (nonatomic) struct __IOPMConnection { } *powerManagementConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (weak, nonatomic) id<SPPowerMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(unsigned long long)a0;
- (void)startMonitoring;
- (id)initWithDelegate:(id)a0;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (void)claimWakeWithReason:(id)a0;
- (unsigned long long)parseCapabilities:(unsigned int)a0;

@end
