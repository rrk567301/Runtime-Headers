@class ICCommandCenter, NSMutableDictionary, NSMutableArray;

@interface ICScannerDeviceBrowser : NSObject {
    ICCommandCenter *_commandCenter;
    long long _numberOfBrowsingBrowsers;
    long long _numberOfBrowsersOfSharedDevice;
    long long _numberOfBrowsersOfBonjourDevice;
    BOOL _processDevicesInvokedOnce;
}

@property (readonly) NSMutableDictionary *devices;
@property (readonly) NSMutableArray *browsers;
@property (retain) NSMutableArray *internalDevices;
@property (retain) NSMutableArray *TWAINDevices;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } devicesLock;

+ (id)defaultBrowser;

- (void)dealloc;
- (id)init;
- (void)stop:(id)a0;
- (void)start:(id)a0;
- (id)getConnection;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void)handleCommandCompletion:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)addBrowser:(id)a0;
- (void)removeBrowser:(id)a0;
- (id)deviceWithDelegate:(id)a0;
- (void)icddConnectionSuspend:(id)a0;
- (void)icddConnectionResume:(id)a0;
- (void)handleNetworkDeviceRemoved:(id)a0;
- (void)startBrowsingForSharedDevices;
- (void)stopBrowsingForSharedDevices;
- (void)startBrowsingForBonjourDevices;
- (void)stopBrowsingForBonjourDevices;
- (void)helloICDD;
- (void)registerForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)unregisterForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)updateDevice:(id)a0;
- (void)updateDevices:(id)a0 type:(unsigned long long)a1;
- (void)processDevices:(id)a0;
- (id)deviceWithDeviceRef:(id)a0;
- (id)deviceWithDeviceID:(id)a0;
- (id)devicesMatchingDeviceTypeMask:(unsigned long long)a0;
- (void)informBrowserDelegateUsingSelector:(SEL)a0 withObject:(id)a1;
- (BOOL)sendMessageCmd:(id)a0;
- (void)addTWAINDevice:(id)a0;
- (id)copyOfTWAINDevices;
- (void)removeAllTWAINDevices;
- (void)resetAllTWAINDevices;
- (void)scanForTWAINDevices;

@end
