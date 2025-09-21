@class NSArray, FigCaptureSessionParsedCameraSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedCinematographyConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (readonly, nonatomic) NSArray *videoCaptureConnectionConfigurations;
@property (readonly, nonatomic) NSArray *previewConnectionConfigurations;
@property (readonly, nonatomic) FigCaptureSessionParsedCameraSourceConfiguration *sourceConfiguration;

- (void)dealloc;
- (id)initWithVideoPreviewSinkConnectionConfiguration:(id)a0 videoCaptureConnectionConfigurations:(id)a1 previewConnectionConfigurations:(id)a2 sourceConfiguration:(id)a3;

@end
