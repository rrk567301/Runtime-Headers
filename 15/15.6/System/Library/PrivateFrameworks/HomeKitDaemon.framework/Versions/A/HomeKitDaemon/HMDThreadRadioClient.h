@class HMDThreadCommandTimer, CtrClient, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadRadioClient : HMFObject <HMFLogging, HMDThreadRadioClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) CtrClient *threadClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *threadStateCaptureQueue;
@property (readonly, nonatomic) char threadNetworkUp;
@property (nonatomic) long long threadLayerInformedResidentState;
@property (nonatomic) char isGeoAvailable;
@property (retain, nonatomic) HMDThreadCommandTimer *deferredCommandTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *threadEventQueue;
@property (readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForThreadNetworkEvents;
- (void)_updateThreadMessageReliabilityParametersWithUserDefinedValues:(char)a0;
- (void)registerForThreadNetworkEvents:(id)a0;
- (long long)_WEDConnectionStateFromStatus:(id)a0 disconnectReason:(id)a1;
- (id)_WEDStateChangeEventFromThreadEvent:(struct shared_ptr<CtrXPC::Event> { struct Event *x0; struct __shared_weak_count *x1; })a0;
- (long long)_connectionStateFromString:(id)a0;
- (long long)_nodeTypeFromString:(id)a0;
- (void)_notifyObserversOfCallStateChangedEvent:(id)a0;
- (void)_notifyObserversOfPeripheralDeviceNodeTypeEvent:(id)a0;
- (void)_notifyObserversOfThreadNetworkEvent:(id)a0;
- (void)_notifyObserversOfThreadPreferredNetworkUpdatedEvent:(id)a0;
- (void)_notifyObserversOfThreadWakeOnDeviceConnectionStateEvent:(id)a0;
- (void)_reportCurrentThreadState:(id)a0;
- (void)_unregisterForThreadNetworkEvents;
- (void)connectToExtendedMACAddress:(id)a0 completion:(id /* block */)a1;
- (void)informThreadLayerOfResidentChange:(char)a0 primaryResidentIsThreadCapable:(char)a1;
- (char)isThreadNetworkUp;
- (void)setThreadMessageReliabilityParameters:(id)a0 activeRetransmitMs:(id)a1 activeThresholdMs:(id)a2 additionalRetransmitDelayMs:(id)a3;
- (char)shouldInformThreadOfResidentChange:(char)a0 primaryResidentIsThreadCapable:(char)a1;
- (void)startFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(char)a1 completion:(id /* block */)a2;
- (void)startThreadNetwork:(id)a0 completion:(id /* block */)a1;
- (void)startThreadNetworkWithOperationalDataset:(id)a0 isOwnerUser:(char)a1 completion:(id /* block */)a2;
- (void)startThreadPairingWithExtendedMACAddress:(id)a0 isWedDevice:(char)a1 completion:(id /* block */)a2;
- (void)stopFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)stopThreadNetworkWithCompletion:(id /* block */)a0;
- (void)stopThreadPairingWithCompletion:(id /* block */)a0;
- (void)triggerThreadNetworkStateCaptureForAccessories:(id)a0 isSessionFailure:(char)a1 withCompletion:(id /* block */)a2;
- (void)triggerThreadNetworkStateCaptureWithCompletion:(id /* block */)a0;
- (void)unregisterForThreadNetworkEvents:(id)a0;

@end
