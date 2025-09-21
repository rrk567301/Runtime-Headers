@class NSArray, NSString, AXVoiceOverVoiceRotorItem, AXCVoiceSelection, _TtC12ScreenReader18SCRCSpeechSettings;

@interface ScreenReader.SCRCSpeechSettings : NSObject {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settings;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseSystemSettings;
}

@property (class, nonatomic, retain) _TtC12ScreenReader18SCRCSpeechSettings *shared;

@property (nonatomic, readonly) AXCVoiceSelection *systemDefaultSelection;
@property (nonatomic, copy) NSArray *voiceRotors;
@property (nonatomic, readonly) AXVoiceOverVoiceRotorItem *selectedRotor;
@property (nonatomic, copy) NSString *selectedRotorId;
@property (nonatomic) long long rotorRate;
@property (nonatomic) long long rotorPitch;
@property (nonatomic) long long rotorVolume;
@property (nonatomic) BOOL languageDetectionEnabled;

- (void)migrate;
- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (id)voiceForLanguageWithLanguageID:(id)a0;
- (id)languageForVoice:(id)a0;
- (id)languagesInRotor;
- (id)nameForVoice:(id)a0 userDefineName:(id)a1;

@end
