@interface CSAudioSpectralMeter : NSObject {
    struct unique_ptr<CSAudioSpectralMeterImpl, std::default_delete<CSAudioSpectralMeterImpl>> { struct CSAudioSpectralMeterImpl *__ptr_; } _spectralMeterImpl;
}

@property (nonatomic) BOOL enable;

- (id).cxx_construct;
- (void)processAudioChunk:(id)a0;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (id)getFrequencyMagnitudesResult;
- (id)initWithSampleRate:(float)a0 windowSize:(unsigned long long)a1;
- (void)setOutputFrequencyBandsInHz:(id)a0;

@end
