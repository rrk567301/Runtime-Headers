@class NSString, AFInterstitialConfiguration;

@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating> {
    AFInterstitialConfiguration *_base;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    char _isVoiceTrigger;
    char _isDucking;
    char _isTwoShot;
    unsigned long long _speechEndHostTime;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStyle : 1; unsigned char hasLanguageCode : 1; unsigned char hasGender : 1; unsigned char hasRecordRoute : 1; unsigned char hasIsVoiceTrigger : 1; unsigned char hasIsDucking : 1; unsigned char hasIsTwoShot : 1; unsigned char hasSpeechEndHostTime : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setGender:(long long)a0;
- (void)setLanguageCode:(id)a0;
- (void)setStyle:(long long)a0;
- (char)isDirty;
- (id)getLanguageCode;
- (void)setRecordRoute:(id)a0;
- (long long)getGender;
- (char)getIsDucking;
- (char)getIsTwoShot;
- (char)getIsVoiceTrigger;
- (id)getRecordRoute;
- (unsigned long long)getSpeechEndHostTime;
- (long long)getStyle;
- (id)initWithBase:(id)a0;
- (void)setIsDucking:(char)a0;
- (void)setIsTwoShot:(char)a0;
- (void)setIsVoiceTrigger:(char)a0;
- (void)setSpeechEndHostTime:(unsigned long long)a0;

@end
