@class NSDecimalNumber, NSString;

@interface CoreHapticsTools.CHTAudioCustomEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ pitch;
    void /* unknown type, empty encoding */ brightness;
    void /* unknown type, empty encoding */ pan;
    void /* unknown type, empty encoding */ waveformPath;
    void /* unknown type, empty encoding */ monoDataArray;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ pcmData;
    void /* unknown type, empty encoding */ absoluteWaveformURL;
    void /* unknown type, empty encoding */ placesToLookForExternalResources;
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
@property (nonatomic, copy) NSString *waveformPath;
@property (nonatomic, readonly) NSString *filePath;

- (void).cxx_destruct;

@end
