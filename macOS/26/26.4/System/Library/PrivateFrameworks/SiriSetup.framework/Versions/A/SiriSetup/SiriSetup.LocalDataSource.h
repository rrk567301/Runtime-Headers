@interface SiriSetup.LocalDataSource : NSObject {
    void /* unknown type, empty encoding */ personaId;
    void /* unknown type, empty encoding */ iCloudAltDSID;
    void /* unknown type, empty encoding */ siriSharedUserId;
    void /* unknown type, empty encoding */ enrollmentMode;
    void /* unknown type, empty encoding */ siriLanguageOptions;
    void /* unknown type, empty encoding */ canSkipVoiceTraining;
    void /* unknown type, empty encoding */ isSATEnrolled;
    void /* unknown type, empty encoding */ isFirstTimeSetup;
    void /* unknown type, empty encoding */ hasVoiceProfileInCloud;
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ bestSupportedLanguageCode;
    void /* unknown type, empty encoding */ siriEnabled;
    void /* unknown type, empty encoding */ setupDismissed;
    void /* unknown type, empty encoding */ recognizeMyVoiceEnabled;
    void /* unknown type, empty encoding */ voiceTriggerEnabled;
    void /* unknown type, empty encoding */ voiceTriggerRepromptCompleted;
    void /* unknown type, empty encoding */ compactVoiceTriggerAvailable;
    void /* unknown type, empty encoding */ compactVoiceTriggerDisclosurePresented;
    void /* unknown type, empty encoding */ siriInCallEnabled;
    void /* unknown type, empty encoding */ siriDataSharingStatus;
    void /* unknown type, empty encoding */ siriVoice;
    void /* unknown type, empty encoding */ siriVolume;
    void /* unknown type, empty encoding */ siriLanguage;
    void /* unknown type, empty encoding */ appleIntelligenceEnabled;
    void /* unknown type, empty encoding */ phraseType;
    void /* unknown type, empty encoding */ shouldShowSummarization;
    void /* unknown type, empty encoding */ visualIntelligenceCameraRestricted;
    void /* unknown type, empty encoding */ areGenerativeModelsAvailable;
    void /* unknown type, empty encoding */ deviceSupportsVoiceTrigger;
    void /* unknown type, empty encoding */ deviceHasCameraButton;
    void /* unknown type, empty encoding */ lastShownCoordinatorVersion;
    void /* unknown type, empty encoding */ overrideViewStyle;
    void /* unknown type, empty encoding */ assistantPresented;
    void /* unknown type, empty encoding */ assistantVoiceTriggerPresented;
    void /* unknown type, empty encoding */ requiresVoiceSelection;
    void /* unknown type, empty encoding */ requiresLanguageSelection;
    void /* unknown type, empty encoding */ showMultitriggerForSetup;
}

- (void).cxx_destruct;
- (id)init;

@end
