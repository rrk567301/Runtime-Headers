@class NSArray, AXMOscillator, AXMSynthMainParameters, AXMADSREnvelope;

@interface AXMSynth : NSObject

@property (nonatomic) double *sampleBuffer;
@property (retain, nonatomic) AXMSynthMainParameters *parameters;
@property (nonatomic) float mainVolume;
@property (nonatomic) double baseFrequency;
@property (readonly, nonatomic) double sampleRate;
@property (retain, nonatomic) AXMOscillator *oscillator1;
@property (retain, nonatomic) AXMOscillator *oscillator2;
@property (retain, nonatomic) AXMOscillator *oscillator3;
@property (readonly, nonatomic) NSArray *allOscillators;
@property (retain, nonatomic) AXMOscillator *operator1;
@property (retain, nonatomic) AXMOscillator *operator2;
@property (retain, nonatomic) AXMOscillator *operator3;
@property (retain, nonatomic) AXMOscillator *operator4;
@property (readonly, nonatomic) NSArray *allOperators;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (nonatomic) double gain;

- (void).cxx_destruct;
- (void)setSampleRate:(double)a0;
- (float)mainVolume;
- (void)setMainVolume:(float)a0;
- (void)bypassEnvelopes;
- (id)allOscillatorsAndOperators;
- (double)baseFrequency;
- (void)bypassAllOperatorsAndOscillators;
- (void)enumerateOscillatorsWithBlock:(id /* block */)a0;
- (double)getNextSample;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)loadPreset:(id)a0;
- (id)oscillatorWithIdentifier:(id)a0;
- (id)oscillatorsWithIdentifiers:(id)a0;
- (void)playNote:(float)a0;
- (void)releaseNote;
- (void)setBaseFrequency:(double)a0;

@end
