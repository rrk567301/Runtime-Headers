@class NSData, NSString, CUMobileDeviceDiscovery, NSSet, NSMutableDictionary, NSObject, CUWiFiScanner, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface RPLegacyDeviceDiscovery : NSObject {
    char _activateCalled;
    char _activateInProgress;
    char _activateCompleted;
    NSData *_blePayloadFilterData;
    NSData *_blePayloadFilterMask;
    NSMutableDictionary *_devices;
    char _invalidateCalled;
    char _invalidateDone;
    char _verifyDevices;
    SFDeviceDiscovery *_bleDiscovery;
    struct BonjourBrowser { } *_bonjourBrowser;
    CUMobileDeviceDiscovery *_mdDiscovery;
    char _wifiAirPlayWAC;
    CUWiFiScanner *_wifiScanner;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned char deviceActionType;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int rssiThreshold;
@property (nonatomic) char scanCache;
@property (nonatomic) unsigned int scanRate;
@property (readonly, nonatomic) unsigned int scanState;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) char targetUserSession;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned int wifiScanFlags;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (copy, nonatomic) id /* block */ timeoutHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_cleanup;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_lostAllDevices;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_bonjourHandleAddOrUpdateDevice:(id)a0;
- (void)_bonjourHandleEventType:(unsigned int)a0 info:(id)a1;
- (void)_bonjourHandleRemoveDevice:(id)a0;
- (int)_bonjourStart;
- (void)_interrupted;
- (void)_mdHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_bleHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_bleHandleDeviceFound:(id)a0;
- (void)_bleHandleDeviceLost:(id)a0;
- (int)_bleStart;
- (void)_foundDevice:(id)a0;
- (void)_lostDeviceByIdentifier:(id)a0;
- (void)_mdHandleDeviceFound:(id)a0;
- (void)_mdHandleDeviceLost:(id)a0;
- (int)_mdStart;
- (void)_wifiHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_wifiHandleDeviceFound:(id)a0;
- (void)_wifiHandleDeviceLost:(id)a0;
- (int)_wifiStart;
- (void)setBLEPayloadFilterData:(id)a0 mask:(id)a1;

@end
