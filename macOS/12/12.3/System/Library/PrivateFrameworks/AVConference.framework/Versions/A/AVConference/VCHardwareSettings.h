@class NSMutableSet, NSMutableDictionary;

@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSMutableSet *pixelFormatCollections;

+ (long long)deviceClass;
+ (unsigned int)screenHeight;
+ (unsigned int)screenWidth;
+ (BOOL)supportsHEIFEncoding;
+ (BOOL)supportsHEVCEncoding;
+ (id)supportedVideoPayloads;
+ (BOOL)supportsHEVCDecoding;
+ (unsigned int)maxActiveVideoDecoders;
+ (BOOL)supportsPortraitCameraCapture;
+ (unsigned int)maxActiveVideoEncoders;
+ (BOOL)isSpatialAudioSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
+ (BOOL)shouldOverrideGPUMuxing;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
+ (float)previewPreferredAspectRatio;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (BOOL)shouldEnforceScreenFrameRateLimit;
+ (BOOL)limitCameraDownlinkBitrateDuringSharing;
+ (BOOL)supportsDedicatedSystemAudioStream;
+ (BOOL)disableMLScalarDuringSharing;
+ (long long)screenShareCapabilities;
+ (BOOL)preferPresentationTimestamp;
+ (BOOL)isDisplayPortrait;
+ (BOOL)isCaptureSIFRPreferred;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (BOOL)isVideoRenderingSupported;
+ (unsigned int)builtinMicCount;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (BOOL)disableViewPointCorrectionForSharing;

- (void)dealloc;
- (id)init;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0 isLowLatencyAudio:(BOOL)a1;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (id)featureListStringForH264:(int)a0;
- (id)featureListStringForHEVC:(int)a0;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;

@end
