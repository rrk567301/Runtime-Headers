@class NSString, NSImage;

@interface IKDeviceItem : NSObject

@property (copy) NSString *deviceName;
@property (copy) NSString *deviceUUID;
@property (retain) NSImage *deviceIcon;
@property long long deviceID;
@property char isCamera;
@property char isScanner;
@property char isRoot;
@property char isNetwork;

- (void)dealloc;
- (id)description;

@end
