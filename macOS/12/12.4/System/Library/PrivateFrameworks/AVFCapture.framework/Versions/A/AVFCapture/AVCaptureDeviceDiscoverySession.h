@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (void)initialize;
+ (id)allDevices;
+ (id)allVideoDevices;
+ (id)allVideoDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allDeviceTypes;
+ (id)allPointCloudDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allPointCloudDevices;
+ (id)allAudioDevices;
+ (id)allVirtualDevices;
+ (id)allSupportedMultiCamDeviceSets;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;

@end
