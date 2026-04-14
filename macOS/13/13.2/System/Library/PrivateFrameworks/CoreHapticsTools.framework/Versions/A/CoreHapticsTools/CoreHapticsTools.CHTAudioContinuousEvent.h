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
@property (nonatomic, retain) void /* unknown type, empty encoding */ _attackTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _decayTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _sustained;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _releaseTime;

- (void).cxx_destruct;

@end
