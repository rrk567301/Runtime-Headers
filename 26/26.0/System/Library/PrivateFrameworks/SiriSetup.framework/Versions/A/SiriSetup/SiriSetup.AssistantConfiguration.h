@class NSString;

@interface SiriSetup.AssistantConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ hasVoiceProfileInCloud;
    void /* unknown type, empty encoding */ siriEnabled;
    void /* unknown type, empty encoding */ siriLanguage;
    void /* unknown type, empty encoding */ siriSharedUserId;
    void /* unknown type, empty encoding */ siriVoice;
    void /* unknown type, empty encoding */ siriVolume;
    void /* unknown type, empty encoding */ recognizeMyVoiceEnabled;
    void /* unknown type, empty encoding */ voiceTriggerEnabled;
    void /* unknown type, empty encoding */ siriInCallEnabled;
    void /* unknown type, empty encoding */ siriDataSharingStatus;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
