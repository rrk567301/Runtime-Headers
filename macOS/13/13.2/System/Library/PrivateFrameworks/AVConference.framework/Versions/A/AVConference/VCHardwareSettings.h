@class NSMutableSet, NSMutableDictionary;

@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
    BOOL _isSiriVoiceTapSupported;
    BOOL _isSiriVoicePlayoutSupported;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSMutableSet *pixelFormatCollections;
@property (readonly, nonatomic) BOOL isSiriVoiceTapSupported;
@property (readonly, nonatomic) BOOL isSiriVoicePlayoutSupported;

+ (long long)deviceClass;
+ (unsigned int)screenHeight;
+ (unsigned int)screenWidth;
+ (BOOL)supportsHEIFEncoding;
+ (BOOL)isSpatialAudioSupported;
+ (id)supportedVideoPayloads;
+ (BOOL)isCaptionsSupported;
+ (unsigned int)maxActiveVideoEncoders;
+ (unsigned int)maxActiveVideoDecoders;
+ (BOOL)isSiriVoiceTapSupported;
+ (BOOL)isSiriVoicePlayoutSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
+ (BOOL)shouldOverrideGPUMuxing;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
+ (double)previewPreferredAspectRatio;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (BOOL)shouldEnforceScreenFrameRateLimit;
+ (BOOL)limitCameraDownlinkBitrateDuringSharing;
+ (BOOL)supportsDedicatedSystemAudioStream;
+ (BOOL)disableMLScalarDuringSharing;
+ (long long)screenShareCapabilities;
+ (BOOL)supportsPortraitCameraCapture;
+ (BOOL)preferPresentationTimestamp;
+ (BOOL)isCellularTappingSupported;
+ (BOOL)supportsHEVCEncoding;
+ (BOOL)isCaptureSIFRPreferred;
+ (BOOL)isDisplayPortrait;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)builtinMicCount;
+ (BOOL)disableViewPointCorrectionForSharing;
+ (BOOL)supportsHEVCDecoding;
+ (BOOL)isVideoRenderingSupported;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (struct CGPoint { double x0; double x1; })frontCameraOffsetFromDisplayCenter;
+ (BOOL)retainPixelBufferForMomentsEnabled;

- (void)dealloc;
- (id)init;
- (id)featureListStringForH264:(int)a0;
- (id)featureListStringForHEVC:(int)a0;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0 isLowLatencyAudio:(BOOL)a1;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;

@end
