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
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allVideoDevices;
+ (id)allAudioDevices;
+ (id)allVirtualDevices;
+ (id)allVideoDeviceTypes;
+ (id)allPointCloudDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allVirtualDeviceTypes;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allMetadataCameraDevices;
+ (id)allMetadataCameraDeviceTypes;

- (id)init;
- (id)description;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (void)dealloc;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;

@end
