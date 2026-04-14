@class GCKeyboardAndMouseEmulatedController, NSSet, NSString, _GCKeyboardAndMouseManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, GCDeviceSessionDeviceProvider_Project;

@interface GCKeyboardControllerManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    _GCKeyboardAndMouseManager<GCDeviceSessionDeviceProvider_Project> *_keyboardManager;
    NSUserDefaults *_settings;
    unsigned long long _mouseSensitivity;
    GCKeyboardAndMouseEmulatedController *_emulatedController;
}

@property (nonatomic) int emulatedControllerMapping;
@property (readonly, copy) NSSet *controllers;
@property (readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)activateWithSession:(id)a0 environment:(id)a1 options:(unsigned long long)a2;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (id)invalidateWithSession:(id)a0 environment:(id)a1;
- (void)setMouseSensitivity:(unsigned long long)a0;

@end
