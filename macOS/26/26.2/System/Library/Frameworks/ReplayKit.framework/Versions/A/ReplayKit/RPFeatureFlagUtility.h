@interface RPFeatureFlagUtility : NSObject {
    BOOL _stereoAudioControlCenter;
    BOOL _systemBannerEnabled;
    BOOL _screenRecordingCameraPip;
    BOOL _screenCaptureAlertEnabled;
    BOOL _coreGraphicsCaptureAPINotificiationEnabled;
    BOOL _largePresenterOverlayFullHDPlus;
    BOOL _replayKitScreenRecordingHEVC;
    BOOL _replayKitScreenRecordingHDR;
    BOOL _screenRecordingPassthroughCamera;
    BOOL _highQualityLocalRecordingEnabled;
    BOOL _windowServerScreenshots;
    BOOL _solariumEnabled;
    BOOL _recordingSDRToneMapping;
}

@property (readonly, nonatomic) BOOL stereoAudioControlCenter;
@property (readonly, nonatomic) BOOL screenRecordingCameraPip;
@property (readonly, nonatomic) BOOL systemBannerEnabled;
@property (readonly, nonatomic) BOOL alwaysOnDisplayEnabled;
@property (readonly, nonatomic) BOOL screenCaptureAlertEnabled;
@property (readonly, nonatomic) BOOL independentWindowAlwaysHDEnabled;
@property (readonly, nonatomic) BOOL coreGraphicsCaptureAPINotificiationEnabled;
@property (readonly, nonatomic) BOOL coreGraphicsProxyingEnabled;
@property (readonly, nonatomic) BOOL largePresenterOverlayFullHDPlus;
@property (readonly, nonatomic) BOOL replayKitScreenRecordingHEVC;
@property (readonly, nonatomic) BOOL audioDSPAutomaticMicModeEnabled;
@property (readonly, nonatomic) BOOL replayKitScreenRecordingHDR;
@property (readonly, nonatomic) BOOL screenRecordingPassthroughCamera;
@property (readonly, nonatomic) BOOL highQualityLocalRecordingEnabled;
@property (readonly, nonatomic) BOOL windowServerScreenshots;
@property (readonly, nonatomic) BOOL solariumEnabled;
@property (readonly, nonatomic) BOOL recordingSDRToneMapping;
@property (readonly, nonatomic) BOOL replayKitSDRToneMapping;

+ (id)sharedInstance;

- (id)init;
- (BOOL)toneMappedSDREnabled;

@end
