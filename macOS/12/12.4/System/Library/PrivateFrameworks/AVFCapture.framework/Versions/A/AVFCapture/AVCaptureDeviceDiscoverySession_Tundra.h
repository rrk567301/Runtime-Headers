@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession_Tundra : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    BOOL _allowIOSMacEnvironment;
    NSArray *_devices;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (void)initialize;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;

@end
