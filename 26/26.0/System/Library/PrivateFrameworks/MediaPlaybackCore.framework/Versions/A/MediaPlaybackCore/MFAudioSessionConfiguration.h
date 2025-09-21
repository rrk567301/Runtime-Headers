@interface MFAudioSessionConfiguration : NSObject {
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ routeSharingPolicy;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ audioSessionMXProperties;
    void /* unknown type, empty encoding */ allowEnhanceDialogue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 routeSharingPolicy:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)setAllowEnhanceDialogue:(BOOL)a0;
- (void)setAudioSessionMXProperties:(id)a0;

@end
