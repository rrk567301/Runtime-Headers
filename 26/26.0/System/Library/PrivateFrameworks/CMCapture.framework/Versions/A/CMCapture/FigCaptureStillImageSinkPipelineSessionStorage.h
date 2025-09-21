@class NSArray, BWImageQueueSinkNode, NSDictionary, FigCaptureCameraSourcePipeline, FigCaptureSessionPreparedBracket, FigVideoCaptureConnectionConfiguration, FigCaptureSinkPipeline, FigCapturePixelConverter;
@protocol FigCaptureStillImageSinkPipeline;

@interface FigCaptureStillImageSinkPipelineSessionStorage : NSObject {
    struct opaqueCMFormatDescription { } *_stillImageFormatDescription;
    struct opaqueCMFormatDescription { } *_previewFormatDescription;
    struct opaqueCMFormatDescription { } *_rawFormatDescription;
    FigCaptureSessionPreparedBracket *_preparedBracket;
}

@property (readonly, nonatomic) NSArray *stillImageSinkPipelines;
@property (readonly, nonatomic) FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> *primaryStillImageSinkPipeline;
@property (readonly, nonatomic) NSArray *stillImageConnectionConfigurations;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *primaryStillImageConnectionConfiguration;
@property (readonly, nonatomic) NSArray *cameraSourcePipelines;
@property (readonly, nonatomic) FigCaptureCameraSourcePipeline *primaryCameraSourcePipeline;
@property (readonly, nonatomic) BWImageQueueSinkNode *previewSinkNode;
@property (readonly, nonatomic) FigCapturePixelConverter *pixelConverter;
@property (readonly, nonatomic) NSDictionary *colorInfo;
@property (readonly, nonatomic) BOOL stillImagesAreOptimizedForOfflineVideoStabilization;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription **stillImageFormatDescriptionPtr;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription **previewFormatDescriptionPtr;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription **rawFormatDescriptionPtr;
@property (readonly, nonatomic) FigCaptureSessionPreparedBracket *preparedBracket;
@property (retain, nonatomic) NSArray *rawDNGColorCalibrations;
@property (nonatomic) unsigned long long currentUserInitiatedRequestHostTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentUserInitiatedRequestPTS;
@property (nonatomic) long long mostRecentBurstSettingsID;
@property (nonatomic) BOOL videoStabilizationOverscanCropEnabled;

- (void)dealloc;
- (id)stillImageConnectionConfigurationForStillImageSinkPipeline:(id)a0;
- (id)stillImageSinkPipelineWithStillImageCoordinator:(id)a0;
- (id)initWithStillImageSinkPipelines:(id)a0 cameraSourcePipelines:(id)a1 previewSinkNode:(id)a2 pixelConverter:(id)a3 colorInfo:(id)a4 stillImagesAreOptimizedForOfflineVideoStabilization:(BOOL)a5 videoStabilizationOverscanCropMultiplier:(float)a6 preparedBracket:(id)a7 stillImageConnectionConfigurations:(id)a8;
- (id)cameraSourcePipelineForStillImageSinkPipeline:(id)a0;

@end
