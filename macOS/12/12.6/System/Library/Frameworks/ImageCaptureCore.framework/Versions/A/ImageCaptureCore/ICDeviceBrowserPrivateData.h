@class NSLock, NSMutableDictionary, NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
    NSLock *_internalDevicesLock;
    NSLock *_TWAINDevicesLock;
}

@property id delegate;
@property BOOL browsing;
@property unsigned long long browsedDeviceTypeMask;
@property (retain) NSMutableDictionary *launchParams;
@property (retain) NSMutableArray *internalDevices;
@property (retain) NSMutableArray *launchedButNonExistent;
@property (retain) NSMutableArray *TWAINDevices;

- (void)dealloc;
- (id)init;
- (void)lockInternalDevices;
- (void)unlockInternalDevices;
- (void)lockTWAINDevices;
- (void)unlockTWAINDevices;

@end
