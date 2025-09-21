@class NSSet, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    char _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    NSMutableDictionary *_devices;
    char _invalidateCalled;
    char _invalidateDone;
    char _legacy;
    char _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long scanRateOverride;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long fastScanMode;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) char overrideScreenOff;
@property (nonatomic) long long overrideScreenOffRescanInterval;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) char rssiChangeDetection;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) char scanCache;
@property (nonatomic) long long scanRate;
@property (readonly, nonatomic) long long scanState;
@property (nonatomic) char targetUserSession;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (nonatomic) char trackPeers;
@property (retain, nonatomic) NSSet *useCases;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (int)_ensureXPCStarted;
- (void)_interrupted;
- (void)fastScanCancel:(id)a0;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)_retryConsole;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (void)deviceDiscoveryDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)deviceDiscoveryFoundDevice:(id)a0;
- (void)deviceDiscoveryLostDevice:(id)a0;
- (void)deviceDiscoveryScanStateChanged:(long long)a0;
- (void)fastScanTrigger:(id)a0;
- (void)triggerEnhancedDiscovery:(id)a0;
- (void)triggerEnhancedDiscovery:(id)a0 useCase:(unsigned int)a1 completion:(id /* block */)a2;

@end
