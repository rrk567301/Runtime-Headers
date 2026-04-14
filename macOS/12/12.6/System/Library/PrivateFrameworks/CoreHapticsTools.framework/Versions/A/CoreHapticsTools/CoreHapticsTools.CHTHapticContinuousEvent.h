@class NSDecimalNumber;

@interface CoreHapticsTools.CHTHapticContinuousEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ intensity;
    void /* unknown type, empty encoding */ sharpness;
}

@property (nonatomic, retain) NSDecimalNumber *_duration;
@property (nonatomic, retain) NSDecimalNumber *_intensity;
@property (nonatomic, retain) NSDecimalNumber *_sharpness;
@property (nonatomic) void /* unknown type, empty encoding */ attackTime;
@property (nonatomic, retain) NSDecimalNumber *_attackTime;
@property (nonatomic) void /* unknown type, empty encoding */ decayTime;
@property (nonatomic, retain) NSDecimalNumber *_decayTime;
@property (nonatomic) void /* unknown type, empty encoding */ sustained;
@property (nonatomic, retain) NSDecimalNumber *_sustained;
@property (nonatomic) void /* unknown type, empty encoding */ releaseTime;
@property (nonatomic, retain) NSDecimalNumber *_releaseTime;

@end
