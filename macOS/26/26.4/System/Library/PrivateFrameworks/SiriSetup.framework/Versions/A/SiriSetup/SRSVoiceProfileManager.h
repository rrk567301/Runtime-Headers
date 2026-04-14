@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0 completion:(id /* block */)a1;
- (void)discardSiriEnrollmentForLanguageCode:(id)a0;
- (BOOL)isVoiceTriggerRepromptRequired;
- (void).cxx_destruct;
- (id)init;
- (void)deleteUserVoiceProfile:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;
- (void)voiceTriggerRePromptFinished;

@end
