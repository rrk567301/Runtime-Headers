@class NSArray, FigCaptureSessionParsedMicSourceConfiguration, FigCaptureSmartStyle;

@interface FigCaptureSessionParsedConfiguration : NSObject

@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic, getter=isMultiCamSession) char multiCamSession;
@property (readonly, nonatomic) char continuityCameraIsWired;
@property (readonly, nonatomic) int continuityCameraClientDeviceClass;
@property (readonly, nonatomic) char clientIsVOIP;
@property (readonly, nonatomic) char suppressVideoEffects;
@property (readonly, nonatomic) char useOfflineVISPipeline;
@property (readonly, nonatomic) char smartStyleRenderingEnabled;
@property (readonly, nonatomic) long long smartStyleControlMode;
@property (readonly, nonatomic) FigCaptureSmartStyle *smartStyle;
@property (readonly, nonatomic) NSArray *parsedCameraSourceConfigurations;
@property (readonly, nonatomic) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration;
@property (readonly, nonatomic) NSArray *metadataSourceConfigurations;
@property (readonly, nonatomic) NSArray *parsedPreviewSinkConfigurations;
@property (readonly, nonatomic) NSArray *videoThumbnailSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedStillImageSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedVideoDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedVisionDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedDepthDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedMetadataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedMovieFileSinkConfigurations;
@property (readonly, nonatomic) NSArray *audioFileSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *audioDataSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *pointCloudDataSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *cameraCalibrationDataSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *parsedCinematographyConfigurations;
@property (readonly, nonatomic) NSArray *parsedLiDARDepthPipelineConfigurations;

+ (void)initialize;

- (void)dealloc;
- (id)initWithSessionConfiguration:(id)a0 clientSetsUserInitiatedCaptureRequestTime:(char)a1 restrictions:(id)a2;

@end
