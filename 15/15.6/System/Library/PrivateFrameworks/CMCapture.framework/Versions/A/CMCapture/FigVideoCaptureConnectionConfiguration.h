@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int _videoStabilizationType;
}

@property (readonly) char previewDepthFilterRenderingEnabled;
@property (readonly) char previewDepthDataDeliveryEnabled;
@property (readonly) char previewFilterRenderingEnabled;
@property (readonly) char portraitAutoSuggestEnabled;
@property (readonly) char irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (readonly) char irisSDOFEnabled;
@property (readonly) struct FigCaptureVideoTransform { char x0; int x1; struct { int x0; int x1; } x2; } transform;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) char mirroringEnabled;
@property (nonatomic) char physicalMirroringForMovieRecordingEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) char deviceOrientationCorrectionEnabled;
@property (nonatomic) char zoomSmoothingEnabled;
@property (nonatomic) char videoGreenGhostMitigationEnabled;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) char cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) char livePhotoMetadataWritingEnabled;
@property (readonly, nonatomic) struct { int x0; int x1; } nonRotatedOutputDimensions;
@property (nonatomic) char stereoVideoCaptureEnabled;
@property (nonatomic) char attachMetadataToVideoBuffers;
@property (nonatomic) char coreMediaFaceTrackingEnabled;

+ (char)cameraIntrinsicMatrixDeliveryEnabled:(id)a0 doingFaceTracking:(char)a1;
+ (id)videoStabilizationMethods:(id)a0 includeIris:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (struct FigCaptureVideoTransform { char x0; int x1; struct { int x0; int x1; } x2; })depthDataTransform;
- (struct FigCaptureVideoTransform { char x0; int x1; struct { int x0; int x1; } x2; })depthDataTransformWithSourceDimensions;
- (id)initWithXPCEncoding:(id)a0;
- (char)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { char x0; int x1; struct { int x0; int x1; } x2; })a0 nodeName:(id)a1;
- (void)setVideoStabilizationType:(int)a0;
- (int)videoStabilizationType;

@end
