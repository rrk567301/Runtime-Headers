@interface CSAudioSpectralMeter : NSObject {
    struct unique_ptr<CSAudioSpectralMeterImpl, std::default_delete<CSAudioSpectralMeterImpl>> { struct { struct CSAudioSpectralMeterImpl *__ptr_; } ; } _spectralMeterImpl;
}

@property (nonatomic) BOOL enable;

- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (void)dealloc;
- (void)processAudioChunk:(id)a0;
- (id)getFrequencyMagnitudesResult;
- (id)initWithSampleRate:(float)a0 windowSize:(unsigned long long)a1;
- (void)setOutputFrequencyBandsInHz:(id)a0;

@end
