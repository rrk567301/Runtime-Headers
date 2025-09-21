@class BWStreamingCVAFilterRendererAnimator, NSString, NSArray, BWFigVideoCaptureDevice, NSMutableDictionary, BWSpringSimulation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, MTLCommandQueue;

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> *_sharedContextQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct { char depthFilterEnabled; struct __CVBuffer *mostRecentPostprocessedDisparityBuffer; float mostRecentFocusDisparity; float mostRecentDeltaDisparity; float mostRecentPortraitStability; int numberOfFramesSinceLastStableFocus; float clientSuppliedSimulatedAperture; float clientSuppliedPortraitLightingEffectStrength; char mostRecentStructuredLightOcclusion; char previousPortraitRequestFellbackToNonDepthRendering; NSArray *mostRecentDetectedFaces; int previousStagePreviewStatus; } _sharedContext;
    int _depthDataSource;
    BWFigVideoCaptureDevice *_captureDevice;
    id<MTLCommandQueue> _commandQueue;
    BWSpringSimulation *_stageProxyLiveRenderingSpringSimulation;
    BWStreamingCVAFilterRendererAnimator *_animator;
    NSMutableDictionary *_objectVisibilityByID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _objectVisibilityByIDLock;
    NSMutableArray *_postprocessedFaces;
    char _foregroundBlurEnabled;
    char _hasSeenDepth;
    int _maxFramesWithoutDepth;
    int _framesWithoutDepth;
    char _hasSeenSegmentation;
    int _maxFramesWithoutSegmentation;
    int _framesWithoutSegmentation;
    char _mirroredForMetadataAdjustment;
    int _rotationDegreesForMetadataAdjustment;
    char _secondaryStreamingPersonSegmentationEnabled;
    char _depthFilterRenderingIsAfterPreviewStitcher;
}

@property (readonly, nonatomic) char studioAndContourRenderingEnabled;
@property (readonly, nonatomic) char stageRenderingEnabled;
@property float simulatedAperture;
@property float portraitLightingEffectStrength;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) char supportsAnimation;
@property (readonly, nonatomic) char adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithCaptureDevice:(id)a0 studioAndContourRenderingEnabled:(char)a1 stageRenderingEnabled:(char)a2 depthDataSource:(int)a3 foregroundBlurEnabled:(char)a4 depthFilterRenderingIsAfterPreviewStitcher:(char)a5 commandQueue:(id)a6 priority:(unsigned int)a7 mirroredForMetadataAdjustment:(char)a8 rotationDegreesForMetadataAdjustment:(int)a9 secondaryStreamingPersonSegmentationEnabled:(char)a10;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputMediaPropertiesByAttachedMediaKey:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;

@end
