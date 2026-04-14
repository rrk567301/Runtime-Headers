@class BWDNGCompressionSession, NSString, NSArray, BWInferenceVideoFormat, NSDictionary, BWCMPhotoCompressionSession, NSObject, BWInferenceEngine, FigCapturePixelConverter;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
    NSObject<OS_dispatch_group> *_previewGenerationGroup;
    FigCapturePixelConverter *_previewPixelConverter;
    FigCapturePixelConverter *_thumbnailPixelConverter;
    FigCapturePixelConverter *_clientThumbnailPixelConverter;
    BOOL _cameraSupportsFlash;
    BOOL _zeroShutterLagEnabled;
    BWCMPhotoCompressionSession *_cmPhotoCompressionSession;
    BWDNGCompressionSession *_dngCompressionSession;
    unsigned long long _dngBitDepth;
    unsigned long long _maxThreads;
    FigCapturePixelConverter *_jpegPixelConverter;
    int _portraitRenderQuality;
    NSDictionary *_inputColorInfo;
    BOOL _usesHighEncodingPriority;
    float _heifQualityOverride;
    BOOL _heifForceEmbedThumb;
    BOOL _heifUseTiling;
    int _heifTileWidth;
    int _heifTileHeight;
    long long _prewarmedSettingsID;
    BOOL _allowHEIFPrewarming;
    BOOL _prewarmingOngoing;
    NSArray *_alwaysEncodedSemanticSegmentationMatteURNs;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    BWInferenceEngine *_inferenceEngine;
    BOOL _preparedInferenceEngine;
    _Atomic BOOL _opportunisticInferenceCompleted;
    NSObject<OS_dispatch_group> *_inferenceGroup;
    BOOL _alwaysAwaitInference;
    BWInferenceVideoFormat *_inferenceInputVideoFormat;
    struct opaqueCMFormatDescription { } *_inferenceInputFormatDescription;
    NSDictionary *_adaptiveQualityValueForHEIF;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (BOOL)cameraSupportsFlash;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)initWithNodeConfiguration:(id)a0 semanticDevelopmentVersion:(int)a1 inferenceScheduler:(id)a2 alwaysAwaitInference:(BOOL)a3 portraitRenderQuality:(int)a4 deferredPhotoProcessorEnabled:(BOOL)a5 alwaysEncodedSemanticSegmentationMatteURNs:(id)a6;
- (id)inputColorInfo;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setInputColorInfo:(id)a0;
- (void)setUsesHighEncodingPriority:(BOOL)a0;
- (void)setZeroShutterLagEnabled:(BOOL)a0;
- (BOOL)usesHighEncodingPriority;
- (BOOL)zeroShutterLagEnabled;

@end
