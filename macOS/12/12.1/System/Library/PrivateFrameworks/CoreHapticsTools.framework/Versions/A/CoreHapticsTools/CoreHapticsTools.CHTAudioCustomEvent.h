@class NSString;

@interface CoreHapticsTools.CHTAudioCustomEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ waveformPath;
    void /* unknown type, empty encoding */ monoDataArray;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ pcmData;
    void /* unknown type, empty encoding */ absoluteWaveformURL;
    void /* unknown type, empty encoding */ placesToLookForExternalResources;
}

@property (nonatomic) void /* unknown type, empty encoding */ duration;
@property (nonatomic) void /* unknown type, empty encoding */ volume;
@property (nonatomic) void /* unknown type, empty encoding */ pitch;
@property (nonatomic) void /* unknown type, empty encoding */ brightness;
@property (nonatomic) void /* unknown type, empty encoding */ pan;
@property (nonatomic) void /* unknown type, empty encoding */ attackTime;
@property (nonatomic) void /* unknown type, empty encoding */ decayTime;
@property (nonatomic) void /* unknown type, empty encoding */ sustained;
@property (nonatomic) void /* unknown type, empty encoding */ releaseTime;
@property (nonatomic, copy) NSString *waveformPath;
@property (nonatomic, readonly) NSString *filePath;

- (void).cxx_destruct;

@end
