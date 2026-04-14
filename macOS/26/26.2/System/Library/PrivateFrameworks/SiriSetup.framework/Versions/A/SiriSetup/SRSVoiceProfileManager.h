@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (void)deleteUserVoiceProfile:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (void).cxx_destruct;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;

@end
