@class NSString;

@interface SiriSetup.LocalDataSourceWriter : NSObject {
    void /* unknown type, empty encoding */ siriEnabled;
    void /* unknown type, empty encoding */ siriLanguage;
    void /* unknown type, empty encoding */ siriVoice;
    void /* unknown type, empty encoding */ recognizeMyVoiceEnabled;
    void /* unknown type, empty encoding */ voiceTriggerEnabled;
    void /* unknown type, empty encoding */ siriInCallEnabled;
    void /* unknown type, empty encoding */ siriDataSharingStatus;
    void /* unknown type, empty encoding */ setupDismissed;
    void /* unknown type, empty encoding */ phraseType;
    void /* unknown type, empty encoding */ id;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
