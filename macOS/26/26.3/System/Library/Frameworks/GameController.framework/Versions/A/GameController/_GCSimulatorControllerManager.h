@class _GCHIDEventSubject, NSSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, GCHIDSystemServiceProviding;

@interface _GCSimulatorControllerManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id<GCHIDSystemServiceProviding> _hidServiceProviding;
    _GCHIDEventSubject *_hidEventSource;
    NSMutableDictionary *_devices;
}

@property (readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)activateWithSession:(id)a0 environment:(id)a1 options:(unsigned long long)a2;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (id)invalidateWithSession:(id)a0 environment:(id)a1;
- (id)matchingHIDServiceAttributes;
- (void)servicesDidChange:(id)a0 withAddedServices:(id)a1 removedServices:(id)a2;

@end
