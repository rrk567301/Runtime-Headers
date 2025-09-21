@interface CBControllerSettings : NSObject <CUXPCCodable>

@property (nonatomic) int discoverableState;
@property (nonatomic) char gameControllerAutoSwitchMode;
@property (nonatomic) char gameControllerUSBBluetoothPairing;
@property (nonatomic) char hid3ppLELegacyMode;
@property (nonatomic) char setupAssistantIfNoKeyboard;
@property (nonatomic) char setupAssistantIfNoPointingDevice;
@property (nonatomic) char spatialSoundProfileAllowed;
@property (nonatomic) char bleAdvRSSI;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;

@end
