@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_micConfiguration;
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
    char _flipStereoAudioCaptureChannels;
    char _windNoiseRemovalEnabled;
    NSString *_sessionPreset;
    char _configuresAppAudioSession;
    char _configuresAppAudioSessionToMixWithOthers;
    char _clientOSVersionSupportsDecoupledIO;
    struct { unsigned int val[8]; } _clientAuditToken;
}

- (void)dealloc;

@end
