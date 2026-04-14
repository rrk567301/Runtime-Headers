@interface SiriSetup.VoiceTrainingPresenter : NSObject <SCDADelegate, SRSTrainingManagerDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataSourceWriter;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ stringsContext;
    void /* unknown type, empty encoding */ viewStyle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ page;
    void /* unknown type, empty encoding */ preEnrollmentVoiceTriggerState;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ AVVCRetryCount;
    void /* unknown type, empty encoding */ isCanceled;
    void /* unknown type, empty encoding */ voiceProfileManager;
    void /* unknown type, empty encoding */ trainingState;
    void /* unknown type, empty encoding */ trainingManager;
    void /* unknown type, empty encoding */ trainingSessionId;
    void /* unknown type, empty encoding */ voiceEnrollmentLoggingId;
    void /* unknown type, empty encoding */ myriadAdvertiser;
    void /* unknown type, empty encoding */ lastPlayedTryAgain;
    void /* unknown type, empty encoding */ currentAnimationCompleted;
    void /* unknown type, empty encoding */ animationContinuation;
}

- (void).cxx_destruct;
- (id)init;
- (void)audioLevelDidChange:(float)a0;
- (void)partialTextDetected:(id)a0;

@end
