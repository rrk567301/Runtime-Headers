@interface SiriKitRuntime.RemoteConversationSpeechData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ rcId;
    void /* unknown type, empty encoding */ asrOnDevice;
    void /* unknown type, empty encoding */ userSpecificInfo;
    void /* unknown type, empty encoding */ speechPackage;
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ languageVariant;
    void /* unknown type, empty encoding */ asrLocation;
    void /* unknown type, empty encoding */ nlLocation;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
