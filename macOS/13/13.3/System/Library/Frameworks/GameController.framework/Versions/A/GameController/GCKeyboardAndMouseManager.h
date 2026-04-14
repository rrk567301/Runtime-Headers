@class GCKeyboardAndMouseEmulatedController, NSMutableDictionary, GCMouse, NSSet, NSObject, GCKeyboard;
@protocol OS_dispatch_queue;

@interface GCKeyboardAndMouseManager : NSObject {
    NSObject<OS_dispatch_queue> *_devicesQueue;
    NSMutableDictionary *_devicesByRegistryID;
    GCMouse *_currentMouse;
    GCKeyboardAndMouseEmulatedController *_emulatedController;
    NSSet *_keyboardHIDServices;
}

@property (readonly) GCKeyboard *coalescedKeyboard;
@property (retain) GCMouse *currentMouse;
@property int emulatedControllerMapping;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleMouseEventAsFrontmostApp:(id)a0;
- (void)_queue_removeDevice:(id)a0 registryID:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_onqueue_refreshKeyboards;
- (BOOL)addDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)addMouse:(id)a0;
- (void)ensureEmulatedControllerWithDevice:(id)a0 added:(BOOL)a1;
- (void)handleKeyboardEventAsFrontmostApp:(id)a0;
- (id)mice;
- (void)publishDevice:(id)a0 withNotificationName:(id)a1;
- (void)removeDevice:(id)a0 registryID:(id)a1;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)setEmulatedControllerEnabled:(int)a0;
- (void)storeDevice:(id)a0;
- (void)unpublishDevice:(id)a0 withNotificationName:(id)a1;
- (void)updateCurrentDevice:(id)a0;
- (void)updateCurrentDeviceAfterDisconnecting:(id)a0;
- (void)updateCurrentMouseAfterDisconnecting:(id)a0;

@end
