@class NSDecimalNumber;

@interface CoreHapticsTools.CHTHapticContinuousEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ intensity;
    void /* unknown type, empty encoding */ sharpness;
}

@property (nonatomic, retain) NSDecimalNumber *_duration;
@property (nonatomic, retain) NSDecimalNumber *_intensity;
@property (nonatomic, retain) NSDecimalNumber *_sharpness;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _attackTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _decayTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _sustained;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _releaseTime;

- (void).cxx_destruct;

@end
