@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString, AVAudioFormat;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_micConfiguration;
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
    BOOL _flipStereoAudioCaptureChannels;
    BOOL _windNoiseRemovalEnabled;
    NSString *_sessionPreset;
    BOOL _configuresAppAudioSession;
    BOOL _configuresAppAudioSessionToMixWithOthers;
    BOOL _configuresAppAudioSessionForBluetoothHighQualityRecording;
    unsigned long long _clientSDKVersionToken;
    BOOL _clientOSVersionSupportsDecoupledIO;
    struct { unsigned int val[8]; } _clientAuditToken;
    BOOL _isAudioOnlyRecordingSession;
    AVAudioFormat *_remoteIOOutputFormat;
    unsigned long long clientSDKVersionToken;
}

- (void)dealloc;

@end
