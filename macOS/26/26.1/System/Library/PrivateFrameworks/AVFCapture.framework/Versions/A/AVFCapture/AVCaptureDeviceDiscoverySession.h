@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (id)allDevices;
+ (void)initialize;
+ (id)allVirtualDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allAudioDevices;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allPointCloudDevices;
+ (id)allVideoDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allVideoDevices;
+ (id)allMetadataCameraDevices;
+ (id)allMetadataCameraDeviceTypes;

- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (id)init;

@end
