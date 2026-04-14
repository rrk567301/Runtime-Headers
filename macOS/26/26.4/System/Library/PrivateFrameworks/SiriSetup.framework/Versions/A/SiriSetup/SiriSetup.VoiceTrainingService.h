@interface SiriSetup.VoiceTrainingService : NSObject <SRSTrainingManagerDelegate> {
    void /* unknown type, empty encoding */ _trainingState;
    void /* unknown type, empty encoding */ _disappeared;
    void /* unknown type, empty encoding */ _partialTextResults;
    void /* unknown type, empty encoding */ _audioLevel;
    void /* unknown type, empty encoding */ _showTooNoisyOverlay;
    void /* unknown type, empty encoding */ _currentScript;
    void /* unknown type, empty encoding */ _isInitialized;
    void /* unknown type, empty encoding */ initializationContinuation;
    void /* unknown type, empty encoding */ _voiceTriggerEnabled;
    void /* unknown type, empty encoding */ _personaId;
    void /* unknown type, empty encoding */ _iCloudAltDSID;
    void /* unknown type, empty encoding */ _enrollmentMode;
    void /* unknown type, empty encoding */ _voiceLocale;
    void /* unknown type, empty encoding */ _voiceProfileManager;
    void /* unknown type, empty encoding */ _myriadAdvertiser;
    void /* unknown type, empty encoding */ _AVVCRetryCount;
    void /* unknown type, empty encoding */ _badMicRetryCount;
    void /* unknown type, empty encoding */ _lastPlayedTryAgain;
    void /* unknown type, empty encoding */ _trainingStartTime;
    void /* unknown type, empty encoding */ _enrollmentMarkedSuccessful;
    void /* unknown type, empty encoding */ _trainingPhase;
    void /* unknown type, empty encoding */ _intelligentLightDelegate;
    void /* unknown type, empty encoding */ _trainingManager;
    void /* unknown type, empty encoding */ _onTrainingCompleted;
    void /* unknown type, empty encoding */ _onTrainingCancelled;
    void /* unknown type, empty encoding */ _onTrainingStateChanged;
    void /* unknown type, empty encoding */ _onAudioLevelChanged;
    void /* unknown type, empty encoding */ _audioGuideEnabled;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)audioLevelDidChange:(float)a0;
- (void)partialTextDetected:(id)a0;

@end
