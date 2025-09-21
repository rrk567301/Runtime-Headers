@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)deleteUserVoiceProfile:(id)a0;
- (char)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (id)markSATEnrollmentSuccessForVoiceProfile:(id)a0;
- (char)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;

@end
