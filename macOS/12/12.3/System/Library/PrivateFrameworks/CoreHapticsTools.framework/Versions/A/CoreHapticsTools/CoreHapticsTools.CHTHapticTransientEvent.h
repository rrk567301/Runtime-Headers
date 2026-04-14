@class NSDecimalNumber;

@interface CoreHapticsTools.CHTHapticTransientEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ sharpness;
    void /* unknown type, empty encoding */ _hapticFullnessSelect;
    void /* unknown type, empty encoding */ _hapticSharpnessSelect;
}

@property (nonatomic) void /* unknown type, empty encoding */ intensity;
@property (nonatomic, retain) NSDecimalNumber *_intensity;
@property (nonatomic, retain) NSDecimalNumber *_sharpness;

@end
