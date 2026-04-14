@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deleteUserVoiceProfile:(id)a0;
- (id)init;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;

@end
