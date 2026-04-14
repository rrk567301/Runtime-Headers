@class NSArray, AVCaptureVideoPreviewLayer_Tundra, AVCaptureOutput_Tundra, AVCaptureConnectionInternal_Tundra;

@interface AVCaptureConnection_Tundra : NSObject {
    AVCaptureConnectionInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) AVCaptureOutput_Tundra *output;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer_Tundra *videoPreviewLayer;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSArray *audioChannels;
@property (readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property (nonatomic) long long videoOrientation;
@property (readonly, nonatomic, getter=isVideoFieldModeSupported) BOOL supportsVideoFieldMode;
@property (nonatomic) long long videoFieldMode;
@property (readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDuration;
@property (readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMaxFrameDuration;
@property (readonly, nonatomic) double videoMaxScaleAndCropFactor;
@property (nonatomic) double videoScaleAndCropFactor;
@property (nonatomic) long long preferredVideoStabilizationMode;
@property (readonly, nonatomic) long long activeVideoStabilizationMode;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;
@property (readonly, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;
@property (nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isCameraIntrinsicMatrixDeliverySupported) BOOL cameraIntrinsicMatrixDeliverySupported;
@property (nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) BOOL cameraIntrinsicMatrixDeliveryEnabled;

+ (void)initialize;
+ (id)connectionWithInputPorts:(id)a0 output:(id)a1;
+ (id)connectionWithInputPort:(id)a0 videoPreviewLayer:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setActive:(BOOL)a0;
- (id)mediaType;
- (BOOL)isLive;
- (id)sourceDevice;
- (int)videoRetainedBufferCountHint;
- (id)initWithInputPorts:(id)a0 output:(id)a1;
- (id)initWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
- (float)getAvgAudioLevelForChannel:(id)a0;
- (float)getPeakAudioLevelForChannel:(id)a0;
- (void)_setVideoMirrored:(BOOL)a0;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (void)setVideoRetainedBufferCountHint:(int)a0;
- (BOOL)isVideoDeviceOrientationCorrectionSupported;
- (BOOL)isVideoDeviceOrientationCorrectionEnabled;
- (void)setVideoDeviceOrientationCorrectionEnabled:(BOOL)a0;
- (id)applicationAnalytics;
- (unsigned int)writerElement;
- (void *)mostRecentlySeenClientSequenceID;
- (void)initCommonStorage;
- (void)setGraph:(struct OpaqueCMIOGraph { } *)a0 node:(int)a1 element:(unsigned int)a2 scope:(unsigned int)a3;
- (void)attachToSplitterNode:(int)a0 audioMixerNode:(int)a1;
- (void)detachFromAudioSplitterAndMixerNodes;
- (id)firstActiveInputPort;
- (id)firstInputPort;
- (void)setWriterElement:(unsigned int)a0;
- (void *)incrementClientSequenceIDAndRetain;
- (void *)copyClientSequenceID;
- (void)setMostRecentlySeenClientSequenceID:(void *)a0;
- (void)_splitterNodeFormatDescriptionDidChange;
- (void)_mixerNodeFormatDescriptionDidChange;
- (void)_updateAudioChannelsArrayCount;
- (void)_rebuildEnabledAudioChannelsArray;
- (void)_applySplitterChannelMapFromAudioChannelsEnabled;
- (void)setEnabled:(BOOL)a0 forChannel:(id)a1;
- (void)_applyVolumeFromAudioChannel:(id)a0;
- (void)setVolume:(float)a0 forChannel:(id)a1;
- (id)_audioLevelsForPropertyID:(unsigned int)a0;
- (void)_updateAudioPeakLevelsArray;
- (void)_updateAudioAvgLevelsArray;
- (void)_clearAudioPropertyListeners;
- (BOOL)_audioChannelsAreAllEnabled;
- (int *)_splitterAudioChannelMapWithSize:(unsigned long long *)a0;
- (int *)splitterAudioChannelMapWithSize:(unsigned long long *)a0;
- (struct opaqueCMFormatDescription { } *)copyPostSplitSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription { } *)_copySourceSummaryAudioFormatDescriptionWithOptionalExpansion:(BOOL)a0;
- (struct opaqueCMFormatDescription { } *)_copySourceSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription { } *)_copyExpandedSourceSummaryAudioFormatDescription;

@end
