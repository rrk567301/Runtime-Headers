@class NSDecimalNumber;

@interface CoreHapticsTools.CHTAudioContinuousEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ pitch;
    void /* unknown type, empty encoding */ brightness;
    void /* unknown type, empty encoding */ pan;
}

@property (nonatomic) void /* unknown type, empty encoding */ duration;
@property (nonatomic, retain) NSDecimalNumber *_duration;
@property (nonatomic, retain) NSDecimalNumber *_volume;
@property (nonatomic, retain) NSDecimalNumber *_pitch;
@property (nonatomic, retain) NSDecimalNumber *_brightness;
@property (nonatomic, retain) NSDecimalNumber *_pan;
@property (nonatomic) void /* unknown type, empty encoding */ attackTime;
@property (nonatomic, retain) NSDecimalNumber *_attackTime;
@property (nonatomic) void /* unknown type, empty encoding */ decayTime;
@property (nonatomic, retain) NSDecimalNumber *_decayTime;
@property (nonatomic) void /* unknown type, empty encoding */ sustained;
@property (nonatomic, retain) NSDecimalNumber *_sustained;
@property (nonatomic) void /* unknown type, empty encoding */ releaseTime;
@property (nonatomic, retain) NSDecimalNumber *_releaseTime;

@end
