@interface IOBluetoothServiceBrowserController : NSWindowController

+ (id)alloc;
+ (id)serviceBrowserController:(unsigned int)a0;
+ (int)browseDevices:(id *)a0 options:(unsigned int)a1;
+ (int)browseDevicesAsSheetForWindow:(id *)a0 options:(unsigned int)a1 window:(id)a2;
+ (id)withServiceBrowserControllerRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;

- (id)init;
- (void)setPrompt:(id)a0;
- (int)runModal;
- (void)setTitle:(id)a0;
- (void)setOptions:(unsigned int)a0;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)setSearchAttributes:(const struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)a0;
- (void)setDescriptionText:(id)a0;
- (id)getTitle;
- (id)getResults;
- (unsigned int)getOptions;
- (const struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)getSearchAttributes;
- (void)clearAllowedUUIDs;
- (void)addAllowedUUID:(id)a0;
- (void)addAllowedUUIDArray:(id)a0;
- (id)getDescriptionText;
- (id)getPrompt;
- (struct OpaqueIOBluetoothObjectRef { } *)getServiceBrowserControllerRef;
- (int)discover:(id *)a0;
- (int)discoverAsSheetForWindow:(id)a0 withRecord:(id *)a1;
- (int)discoverWithDeviceAttributes:(struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)a0 serviceList:(id)a1 serviceRecord:(id *)a2;

@end
