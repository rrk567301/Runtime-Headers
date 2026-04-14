@class NSString, HMFTimer, NSObject;
@protocol HMFTimerProvider, HMMRadarInitiating, OS_dispatch_queue, HMDIOPM;

@interface HMDPowerManager : HMFObject <HMFLogging, HMFTimerProvider, HMFTimerDelegate> {
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    id<HMDIOPM> _iopmLib;
    HMFTimer *_verificationTimer;
    id<HMMRadarInitiating> _ttrManager;
}

@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL networkInterfaceActive;
@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)timerWithTimeInterval:(double)a0 options:(unsigned int)a1;
- (void)_update;
- (void)timerDidFire:(id)a0;
- (void)start;
- (void)stop;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPowerManager:(id)a0 timerProvider:(id)a1 ttrManager:(id)a2;
- (void)dealloc;
- (BOOL)isPowerAsserted;

@end
