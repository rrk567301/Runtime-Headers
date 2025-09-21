@interface RPFeatureFlagUtility : NSObject {
    char _stereoAudioControlCenter;
    char _systemBannerEnabled;
    char _screenRecordingCameraPip;
    char _screenCaptureAlertEnabled;
    char _coreGraphicsCaptureAPINotificiationEnabled;
    char _largePresenterOverlayFullHDPlus;
    char _replayKitScreenRecordingHEVC;
    char _screenCaptureKitRecordingHDR;
}

@property (readonly, nonatomic) char stereoAudioControlCenter;
@property (readonly, nonatomic) char screenRecordingCameraPip;
@property (readonly, nonatomic) char systemBannerEnabled;
@property (readonly, nonatomic) char alwaysOnDisplayEnabled;
@property (readonly, nonatomic) char screenCaptureAlertEnabled;
@property (readonly, nonatomic) char independentWindowAlwaysHDEnabled;
@property (readonly, nonatomic) char coreGraphicsCaptureAPINotificiationEnabled;
@property (readonly, nonatomic) char coreGraphicsProxyingEnabled;
@property (readonly, nonatomic) char largePresenterOverlayFullHDPlus;
@property (readonly, nonatomic) char replayKitScreenRecordingHEVC;
@property (readonly, nonatomic) char screenCaptureKitRecordingHDR;
@property (readonly, nonatomic) char audioDSPAutomaticMicModeEnabled;

+ (id)sharedInstance;

- (id)init;

@end
