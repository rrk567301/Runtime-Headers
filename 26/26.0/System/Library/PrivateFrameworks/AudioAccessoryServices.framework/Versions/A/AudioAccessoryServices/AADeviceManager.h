@class NSXPCListenerEndpoint, NSArray, NSMutableDictionary, NSXPCConnection, AAServicesDaemon, NSObject;
@protocol OS_dispatch_queue;

@interface AADeviceManager : NSObject <NSSecureCoding, AAServicesXPCClientInterface> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    NSMutableDictionary *_batteryDictionary;
    NSMutableDictionary *_deviceDictionary;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _resetOngoing;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) AAServicesDaemon *internalServicesDaemon;
@property (readonly, nonatomic) BOOL direct;
@property (copy, nonatomic) id /* block */ deviceBatteryInfoUpdatedHandler;
@property (copy, nonatomic) id /* block */ deviceBatteryInfoLostHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (readonly, copy) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ headGestureUpdatedHandler;
@property (nonatomic) unsigned int headGestureUpdateFlags;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)_ensureXPCStarted;
- (void)_invalidateDirect;
- (void)_reset;
- (void)_interrupted;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_reportError:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_activate:(BOOL)a0;
- (BOOL)isSystemContext;
- (void)sendDeviceConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)aaServicesRequireReset;
- (void)deviceHeadGestureDetected:(id)a0;
- (void)deviceManagerFoundBatteryInfo:(id)a0;
- (void)deviceManagerFoundDevice:(id)a0;
- (void)deviceManagerLostBatteryInfo:(id)a0;
- (void)deviceManagerLostDevice:(id)a0;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_sendDeviceConfigDirect:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_sendDeviceConfigXPC:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (id)_syncXPCFetchAADeviceBatteryInfoForAddress:(id)a0;
- (id)_syncXPCFetchAADeviceBatteryInfoForIdentifier:(id)a0;
- (id)fetchAADeviceBatteryInfoForAddress:(id)a0;
- (id)fetchAADeviceBatteryInfoForIdentifier:(id)a0;
- (id)fetchAudioAccessoryDeviceForBTAddress:(id)a0;
- (id)fetchPairedAudioAccessoryDevices;
- (void)sendDeviceConfig:(id)a0 device:(id)a1 completion:(id /* block */)a2;

@end
