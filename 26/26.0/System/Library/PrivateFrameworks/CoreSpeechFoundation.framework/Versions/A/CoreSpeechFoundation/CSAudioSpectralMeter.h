@interface CSAudioSpectralMeter : NSObject {
    struct unique_ptr<CSAudioSpectralMeterImpl, std::default_delete<CSAudioSpectralMeterImpl>> { struct CSAudioSpectralMeterImpl *__ptr_; } _spectralMeterImpl;
}

@property (nonatomic) BOOL enable;

- (void)reset;
- (void)dealloc;
- (void)processAudioChunk:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getFrequencyMagnitudesResult;
- (id)initWithSampleRate:(float)a0 windowSize:(unsigned long long)a1;
- (void)setOutputFrequencyBandsInHz:(id)a0;

@end
