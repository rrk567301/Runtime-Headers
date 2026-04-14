@interface VFX.AudioPlayer : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ mixer;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ loops;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ samplesRaw;
    void /* unknown type, empty encoding */ samplesRawCount;
    void /* unknown type, empty encoding */ samplesRawTime;
    void /* unknown type, empty encoding */ samplesRawSampleRate;
    void /* unknown type, empty encoding */ _lock;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
