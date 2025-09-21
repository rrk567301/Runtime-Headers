@class FigCaptureSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureCameraCalibrationDataSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, NSString, FigCaptureIrisSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCapturePointCloudDataSinkConfiguration, FigCaptureMovieFileSinkConfiguration, FigCaptureSourceConfiguration, FigCaptureInternalSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>

@property (readonly) BOOL smartCameraRequired;
@property (copy, nonatomic) NSString *connectionID;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) int underlyingDeviceType;
@property (retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) BOOL enabled;
@property (readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property (readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property (readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;
@property (readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property (readonly) FigCapturePointCloudDataSinkConfiguration *pointCloudDataSinkConfiguration;
@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration *cameraCalibrationDataSinkConfiguration;
@property (readonly) FigCaptureMovieFileSinkConfiguration *movieFileSinkConfiguration;
@property (readonly) FigCaptureInternalSinkConfiguration *internalSinkConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)sourcesFromUnderlyingStream;

@end
