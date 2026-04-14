@class NSString;

@interface _TtCC22AccessibilityUtilities13AXPreferences14AssistiveTouch : NSObject {
    void /* unknown type, empty encoding */ _useNinePointCalibration;
    void /* unknown type, empty encoding */ _defaultVoiceSelectionsByLanguage;
    void /* unknown type, empty encoding */ _scannerSpeechEnabled;
    void /* unknown type, empty encoding */ _scannerSpeechShouldSpeakTraits;
    void /* unknown type, empty encoding */ _scannerSpeechIsInterruptedByScanning;
    void /* unknown type, empty encoding */ _eyeTrackingUseZoomForKeyboardKeys;
}

- (id)init;
- (void).cxx_destruct;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;

@end
