@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int _videoStabilizationType;
}

@property (readonly) BOOL previewDepthFilterRenderingEnabled;
@property (readonly) BOOL previewDepthDataDeliveryEnabled;
@property (readonly) BOOL previewFilterRenderingEnabled;
@property (readonly) BOOL portraitAutoSuggestEnabled;
@property (readonly) BOOL irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (readonly) BOOL irisSDOFEnabled;
@property (readonly) struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; } transform;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) BOOL physicalMirroringForMovieRecordingEnabled;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) BOOL deviceOrientationCorrectionEnabled;
@property (nonatomic) BOOL zoomSmoothingEnabled;
@property (nonatomic) BOOL videoGreenGhostMitigationEnabled;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) BOOL livePhotoMetadataWritingEnabled;
@property (readonly, nonatomic) struct { int x0; int x1; } nonRotatedOutputDimensions;
@property (nonatomic) BOOL stereoVideoCaptureEnabled;
@property (nonatomic) BOOL attachMetadataToVideoBuffers;
@property (nonatomic) BOOL coreMediaFaceTrackingEnabled;

+ (BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)a0 doingFaceTracking:(BOOL)a1;
+ (id)videoStabilizationMethods:(id)a0 includeIris:(BOOL)a1;

- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })depthDataTransformWithSourceDimensions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a0 nodeName:(id)a1;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })depthDataTransform;
- (id)description;
- (int)videoStabilizationType;
- (void)setVideoStabilizationType:(int)a0;
- (BOOL)isEqual:(id)a0;

@end
