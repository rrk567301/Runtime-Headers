@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings10LiveSpeech : NSObject {
    void /* unknown type, empty encoding */ _$enabled_Storage;
    void /* unknown type, empty encoding */ _$keyboardVoiceSelections_Storage;
    void /* unknown type, empty encoding */ _$preferredVoices_Storage;
    void /* unknown type, empty encoding */ _$preferredKeyboardLanguages_Storage;
    void /* unknown type, empty encoding */ _$visionOSLiveSpeechLaunchDistance_Storage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolver;
    void /* unknown type, empty encoding */ _$tripleClickItems_Storage;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (float)liveSpeechPitchForKeyboardID:(id)a0;
- (float)liveSpeechRateForKeyboardID:(id)a0;
- (id)liveSpeechVoiceIdentifierForKeyboardID:(id)a0;

@end
