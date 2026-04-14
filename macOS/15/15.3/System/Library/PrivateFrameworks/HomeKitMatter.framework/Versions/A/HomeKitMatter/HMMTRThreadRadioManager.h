@class HMFTimer, HMMTRAccessoryServerBrowser, HMMTRAccessoryServer, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMMTRThreadRadioControllerDelegate;

@interface HMMTRThreadRadioManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSNumber *fabricIDOfActiveThreadNetwork;
@property (nonatomic) BOOL threadNetworkActivatedForSystemCommissionerFabric;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak, nonatomic) HMMTRAccessoryServer *pairingAccessoryServer;
@property (nonatomic) BOOL preventDisconnect;
@property (nonatomic, getter=isPairingActive) BOOL pairingActive;
@property (nonatomic, getter=isFirmwareUpdateActive) BOOL firmwareUpdateActive;
@property (nonatomic) BOOL pendingThreadStart;
@property (retain, nonatomic) NSString *eMACAddressOfFWUpdatesAccessory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFTimer *disconnectTimer;
@property BOOL deviceIsLockedAndPendingStopThread;
@property (copy, nonatomic) id /* block */ retryCompletionHandler;
@property (copy) id /* block */ pendingStartPairingBlock;
@property (retain, nonatomic) NSNumber *fabricIDOfPendingStartPairingBlock;
@property (nonatomic) long long lastKnownThreadNetworkConnectionState;
@property (nonatomic) BOOL isWEDConnectionRetryActive;
@property (retain, nonatomic) NSString *eMACAddressOfWEDAccessory;
@property (weak) id<HMMTRThreadRadioControllerDelegate> delegate;
@property (nonatomic) BOOL deviceSupportsThreadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithBrowser:(id)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)timerDidFire:(id)a0;
- (void)postNotification:(id)a0 userInfo:(id)a1;
- (BOOL)hasMatterThreadAccessoryInHomeWithFabricID:(id)a0;
- (void)notifyPeripheralDeviceNodeTypeChanged:(long long)a0;
- (void)notifyThreadRadioStateChanged:(long long)a0 nodeType:(long long)a1 fabricID:(id)a2;
- (void)notifyWakeOnDeviceConnectionChanged:(long long)a0 eMACAddress:(id)a1;
- (void)overrideLocationCheckForPairingForFabricID:(id)a0;
- (void)startThreadRadioForHomeWithFabricID:(id)a0;
- (void)stopThreadRadioForHomeWithFabricID:(id)a0;
- (void)dispatchBlock:(id /* block */)a0;
- (void)allowDisconnect;
- (BOOL)isReadyToEstablishWEDConnection;
- (void)__startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)_allowDisconnect;
- (double)_computeRetryDelayForError:(id)a0;
- (id)_connectionStateValueToString:(long long)a0;
- (id)_nodeTypeValueToString:(long long)a0;
- (void)_notifyThreadRadioStateChanged:(long long)a0 nodeType:(long long)a1 fabricID:(id)a2;
- (void)_notifyWakeOnDeviceConnectionChanged:(long long)a0 eMACAddress:(id)a1;
- (void)_retryWEDConnectionToAccessoryWithDelayInMs:(double)a0;
- (BOOL)_shouldRetryWEDConnectionToAccessory;
- (void)_startAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)_startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)_startThreadRadioForHomeWithFabricID:(id)a0 preventDisconnect:(BOOL)a1;
- (void)_startThreadRadioForSystemCommissionerFabricID:(id)a0;
- (void)_stopAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)_stopAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)_stopThreadRadioForHomeWithFabricID:(id)a0;
- (void)_stopThreadRadioForSystemCommissionerFabricID:(id)a0;
- (void)_updateFabricIDOfActiveThreadNetwork:(id)a0 isFabricIDOfSystemCommissioner:(BOOL)a1;
- (void)connectToAccessoryWithExtendedMACAddress:(id)a0 completion:(id /* block */)a1;
- (void)connectToAccessoryWithExtendedMACAddress:(id)a0 forRetry:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleDeviceLockStateChange:(BOOL)a0;
- (BOOL)isReadyToTransitionToFullRouterModeForFirmwareUpdate;
- (BOOL)isThreadNetworkConnected;
- (void)startAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)startThreadRadioForHomeWithFabricID:(id)a0 preventDisconnect:(BOOL)a1;
- (void)startThreadRadioForSystemCommissionerFabricID:(id)a0;
- (void)stopAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)stopAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)stopThreadOnDeviceLockTimeout;
- (void)stopThreadRadioForSystemCommissionerFabricID:(id)a0;

@end
