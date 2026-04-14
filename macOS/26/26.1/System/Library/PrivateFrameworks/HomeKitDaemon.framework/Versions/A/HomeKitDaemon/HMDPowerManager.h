@class NSString, HMFTimer, NSObject;
@protocol HMFTimerProvider, HMMRadarInitiating, OS_dispatch_queue, HMDIOPM;

@interface HMDPowerManager : HMFObject <HMFLogging, HMFTimerProvider, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    id<HMDIOPM> _iopmLib;
    HMFTimer *_verificationTimer;
    id<HMMRadarInitiating> _ttrManager;
}

@property (nonatomic) BOOL networkInterfaceActive;
@property (nonatomic) BOOL started;
@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void)_update;
- (void)start;
- (BOOL)isPowerAsserted;
- (void)timerDidFire:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (id)initWithPowerManager:(id)a0 timerProvider:(id)a1 ttrManager:(id)a2;
- (void).cxx_destruct;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned int)a1;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (id)init;

@end
