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
+ (id)allSupportedMultiCamDeviceSets;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allAudioDevices;
+ (id)allVideoDevices;
+ (id)allDevices;
+ (id)allDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)allVirtualDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allMetadataCameraDevices;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allPointCloudDevices;
+ (id)allAudioDeviceTypes;
+ (id)allMetadataCameraDeviceTypes;
+ (id)allVideoDeviceTypes;

- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (id)description;
- (id)init;
- (void)dealloc;

@end
