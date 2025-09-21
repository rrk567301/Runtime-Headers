@class NSArray, FigPointCloudDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *primaryStillImageConnectionConfiguration;
@property (readonly, nonatomic) NSArray *stillImageConnectionConfigurations;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (readonly, nonatomic) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration;

- (void)dealloc;

@end
