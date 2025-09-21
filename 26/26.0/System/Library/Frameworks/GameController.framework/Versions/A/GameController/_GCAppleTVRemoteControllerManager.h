@class _GCHIDEventSubject, NSSet, NSMutableDictionary, NSString, NSObject, GCController;
@protocol OS_dispatch_queue, GCHIDSystemServiceProviding;

@interface _GCAppleTVRemoteControllerManager : NSObject <GCCurrentApplicationForegroundObserver, GCControllerCoalescingDelegate, GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _supportsMultipleRemotes;
    NSMutableDictionary *_controllersByRegistryID;
    GCController *_firstMicroGamepad;
    long long _currentMediaRemoteInputMode;
    GCController *__controller_genericBTRemote;
    id<GCHIDSystemServiceProviding> _hidServiceProviding;
    _GCHIDEventSubject *_hidEventSource;
    id _hidEventObservation;
}

@property (readonly, copy) NSSet *devices;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (readonly, nonatomic) NSMutableDictionary *controllersByUDID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (void)CBApplicationWillResignActive;
- (void)CBApplicationDidBecomeActive;
- (void)_legacy_publishController:(id)a0;
- (void)_legacy_unpublishController:(id)a0;
- (void)_onqueue_HIDServiceAdded:(id)a0;
- (void)_onqueue_HIDServiceRemoved:(id)a0;
- (id)activateWithSession:(id)a0 environment:(id)a1 options:(unsigned long long)a2;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)a0 existingController:(id)a1;
- (int)connectedATVRemoteCount;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (id)invalidateWithSession:(id)a0 environment:(id)a1;
- (id)matchingHIDServiceAttributes;
- (void)removeCoalescedControllerComponent:(id)a0;
- (void)servicesDidChange:(id)a0 withAddedServices:(id)a1 removedServices:(id)a2;
- (void)storeController:(id)a0;

@end
