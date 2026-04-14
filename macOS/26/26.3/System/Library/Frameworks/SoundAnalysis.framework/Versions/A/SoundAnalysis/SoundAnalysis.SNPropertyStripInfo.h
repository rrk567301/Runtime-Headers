@interface SoundAnalysis.SNPropertyStripInfo : SoundAnalysis.SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ resourcePath;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
