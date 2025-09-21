@class SHMusicalFeaturesConfiguration, SHAudioConverter, SHSpectralOutputConfiguration, SHFeatureExtractorController, AVAudioFormat;

@interface SHMutableSignature : SHSignature

@property (readonly) SHFeatureExtractorController *extractorController;
@property (retain) AVAudioFormat *format;
@property unsigned int currentFrameCount;
@property (readonly) SHAudioConverter *audioConverter;
@property (retain) SHSpectralOutputConfiguration *spectralOutputConfiguration;
@property (readonly) SHMusicalFeaturesConfiguration *musicalFeaturesConfiguration;
@property (readonly) long long clipStyle;
@property (readonly) double maximumSeconds;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (id)dataRepresentation;
- (double)duration;
- (long long)currentPosition;
- (char)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (void)configureWithFormat:(id)a0;
- (char)updateRingBufferDuration:(double)a0 error:(id *)a1;
- (id)clipExcessAudio:(id)a0;
- (char)configureMusicalFeaturesExtractorWithConfiguration:(id)a0 sampleRate:(double)a1 error:(id *)a2;
- (char)configureSpectralPeaksExtractorWithSampleRate:(double)a0 error:(id *)a1;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputWithConfiguration:(id)a0;
- (id)generate:(id *)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1 musicalFeaturesConfiguration:(id)a2;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
