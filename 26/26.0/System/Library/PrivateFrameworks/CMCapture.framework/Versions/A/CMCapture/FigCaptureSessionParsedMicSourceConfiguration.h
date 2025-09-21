@class FigCaptureSourceConfiguration, NSArray, AVAudioFormat, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject

@property (readonly, nonatomic) NSArray *micConnectionConfigurations;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture;
@property (readonly, nonatomic) unsigned long long clientSDKVersionToken;
@property (readonly, nonatomic) AVAudioFormat *remoteIOOutputFormat;

- (void)dealloc;

@end
