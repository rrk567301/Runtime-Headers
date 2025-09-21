@interface SHFeatureExtractor : NSObject {
    struct unique_ptr<shazam::dsp::FeatureExtractor, std::default_delete<shazam::dsp::FeatureExtractor>> { struct __compressed_pair<shazam::dsp::FeatureExtractor *, std::default_delete<shazam::dsp::FeatureExtractor>> { struct FeatureExtractor *__value_; } __ptr_; } real_streatx;
}

@property (readonly) struct unique_ptr<shazam::dsp::FeatureExtractor, std::default_delete<shazam::dsp::FeatureExtractor>> { struct __compressed_pair<shazam::dsp::FeatureExtractor *, std::default_delete<shazam::dsp::FeatureExtractor>> { struct FeatureExtractor *x0; } x0; } streatx;

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)reset;
- (long long)audioDurationInMilliseconds;
- (char)convertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1 code:(long long)a2;
- (id)featuresWithError:(id *)a0;
- (char)flowBuffer:(id)a0 error:(id *)a1;
- (char)flowFloatSamples:(float *)a0 sampleCount:(int)a1 error:(id *)a2;
- (char)flowIntSamples:(short *)a0 sampleCount:(int)a1 error:(id *)a2;
- (id)initWithFeatureConfiguration:(id)a0 error:(id *)a1;
- (void)setStreatx:(struct unique_ptr<shazam::dsp::FeatureExtractor, std::default_delete<shazam::dsp::FeatureExtractor>> { struct __compressed_pair<shazam::dsp::FeatureExtractor *, std::default_delete<shazam::dsp::FeatureExtractor>> { struct FeatureExtractor *x0; } x0; })a0;

@end
