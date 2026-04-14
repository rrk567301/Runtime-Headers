@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (id)allPointCloudDevices;
+ (id)allDevices;
+ (id)allVirtualDeviceTypes;
+ (void)initialize;
+ (id)allVirtualDevices;
+ (id)allMetadataCameraDeviceTypes;
+ (id)allMetadataCameraDevices;
+ (id)allAudioDevices;
+ (id)allVideoDevices;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allVideoDeviceTypes;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allPointCloudDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)allDeviceTypes;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;

@end
