@class FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechUserVoiceProfile;

@interface FTMutableTextToSpeechRequestProsodyTransferConfig : FTTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) FTTextToSpeechUserVoiceProfile *user_voice_profile;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
