@class NSObject, NSPointerArray, HIDEventSystemClient, HIDManager;
@protocol OS_dispatch_queue;

@interface AXEPhysicalKeyboard : NSObject

@property (class, readonly, nonatomic) AXEPhysicalKeyboard *sharedAggregateInstance;

@property (retain, nonatomic) HIDEventSystemClient *_hidEventSystemClient;
@property (retain, nonatomic) HIDManager *_hidManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_physicalKeyboardQueue;
@property (retain, nonatomic) NSPointerArray *_listeners;
@property (readonly, nonatomic) char isCommandDown;
@property (readonly, nonatomic) char isOptionDown;
@property (readonly, nonatomic) char isControlDown;
@property (readonly, nonatomic) char isShiftDown;
@property (readonly, nonatomic) char isFnDown;
@property (readonly, nonatomic) char isCapsLockDown;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (void)_handleHIDEvent:(id)a0;
- (void)unregisterListener:(id)a0;
- (void)_signalKey:(unsigned long long)a0 stateChanged:(char)a1 serviceClient:(id)a2;
- (void)_signalUsage:(unsigned long long)a0 page:(unsigned long long)a1 stateChanged:(char)a2 serviceClient:(id)a3;
- (id)attachedKeyboardIDs;
- (char)isKeyDown:(unsigned long long)a0;

@end
