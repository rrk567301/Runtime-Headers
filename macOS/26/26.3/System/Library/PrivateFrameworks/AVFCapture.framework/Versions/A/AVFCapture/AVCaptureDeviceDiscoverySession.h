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
+ (id)allPointCloudDevices;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allAudioDevices;
+ (id)allVirtualDeviceTypes;
+ (id)allDeviceTypes;
+ (id)allMetadataCameraDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;
+ (id)allAudioDeviceTypes;
+ (id)allDevices;
+ (id)allVideoDeviceTypes;
+ (id)allMetadataCameraDevices;
+ (id)allVirtualDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allVideoDevices;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;

@end
