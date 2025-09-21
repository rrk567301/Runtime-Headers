@class _GCHIDEventSubject, NSString, NSSet, _GCUICGEventBuffer, NSMutableDictionary, NSObject, GCKeyboard;
@protocol OS_dispatch_queue, GCHIDSystemServiceProviding;

@interface _GCKeyboardAndMouseManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _monitorKeyboards;
    BOOL _monitorMice;
    id<GCHIDSystemServiceProviding> _hidServiceProviding;
    _GCHIDEventSubject *_hidEventSource;
    _GCUICGEventBuffer *_eventBuffer;
    NSMutableDictionary *_hidServiceSubjects;
    GCKeyboard *_coalescedKeyboard;
    NSMutableDictionary *_mice;
    NSSet *_keyboardHIDServices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *devices;

- (id)keyboards;
- (void).cxx_destruct;
- (id)activateWithSession:(id)a0 environment:(id)a1 options:(unsigned long long)a2;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (id)invalidateWithSession:(id)a0 environment:(id)a1;
- (id)matchingHIDServiceAttributes;
- (id)mice;
- (void)servicesDidChange:(id)a0 withAddedServices:(id)a1 removedServices:(id)a2;
- (void)_onqueue_refreshKeyboards;
- (void)handleEventsFromCGEventBuffer;

@end
