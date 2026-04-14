@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings13SwitchControl : NSObject {
    void /* unknown type, empty encoding */ _$scanningStyle_Storage;
    void /* unknown type, empty encoding */ _$lock_scanningStyle;
    void /* unknown type, empty encoding */ _$longPressEnabled_Storage;
    void /* unknown type, empty encoding */ _$lock_longPressEnabled;
    void /* unknown type, empty encoding */ _$showFaceGuidance_Storage;
    void /* unknown type, empty encoding */ _$lock_showFaceGuidance;
    void /* unknown type, empty encoding */ _$eyeTrackingDwellEnabled_Storage;
    void /* unknown type, empty encoding */ _$lock_eyeTrackingDwellEnabled;
    void /* unknown type, empty encoding */ _$skipCalibration_Storage;
    void /* unknown type, empty encoding */ _$lock_skipCalibration;
    void /* unknown type, empty encoding */ _$ignoreInvalidConfig_Storage;
    void /* unknown type, empty encoding */ _$lock_ignoreInvalidConfig;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic) long long switchControlScanningStyle;
@property (nonatomic) BOOL switchControlLongPressEnabled;
@property (nonatomic) BOOL switchControlEyeTrackingFaceGuidanceEnabled;

- (void).cxx_destruct;
- (id)init;

@end
