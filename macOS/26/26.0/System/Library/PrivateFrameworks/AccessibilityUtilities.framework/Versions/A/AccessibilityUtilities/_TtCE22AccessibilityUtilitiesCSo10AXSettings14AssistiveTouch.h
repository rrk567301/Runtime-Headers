@class NSString;

@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings14AssistiveTouch : NSObject {
    void /* unknown type, empty encoding */ _$useNinePointCalibration_Storage;
    void /* unknown type, empty encoding */ _$defaultVoiceSelectionsByLanguage_Storage;
    void /* unknown type, empty encoding */ _$scannerSpeechEnabled_Storage;
    void /* unknown type, empty encoding */ _$scannerSpeechShouldSpeakTraits_Storage;
    void /* unknown type, empty encoding */ _$scannerSpeechIsInterruptedByScanning_Storage;
    void /* unknown type, empty encoding */ _$eyeTrackingUseZoomForKeyboardKeys_Storage;
    void /* unknown type, empty encoding */ _$switchControlPointPickerModeEnabled_Storage;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic) BOOL assistiveTouchScannerSpeechEnabled;
@property (nonatomic) BOOL assistiveTouchScannerSpeechShouldSpeakTraits;
@property (nonatomic) BOOL assistiveTouchScannerSpeechIsInterruptedByScanning;
@property (nonatomic) BOOL assistiveTouchEyeTrackingUseZoomForKeyboardKeys;
@property (nonatomic) BOOL assistiveTouchScannerPointPickerModeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;

@end
