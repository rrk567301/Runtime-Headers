@class FigCaptureSourceConfiguration, NSString, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject

@property (readonly, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *previewSmartStyleCoefficientsTimeMachineConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sensitiveContentAnalyzerConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (readonly, nonatomic) int sourceDeviceType;

- (void)dealloc;

@end
