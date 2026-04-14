@interface SpeakerRecognition.SSRVTUITrainingManagerHelper : NSObject {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ currentAsset;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)getCurrentAsset;
- (id)initWithProfile:(id)a0 withDelegate:(id)a1;
- (void)setLocaleIdentifierWithLocaleIdentifier:(id)a0;
- (void)setProfileAndDelegateWithProfile:(id)a0 withDelegate:(id)a1;
- (void)updateVoiceProfileWithNewProfile:(id)a0;
- (id)voiceProfile;

@end
