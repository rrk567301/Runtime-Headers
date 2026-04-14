@class NSString, SHFeatureExtractor, SHFeatureConfiguration;

@interface SHMusicalFeaturesExtractor : NSObject <SHSignatureExtractor>

@property (readonly) SHFeatureExtractor *featureExtractor;
@property (readonly) SHFeatureConfiguration *featureConfiguration;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 sampleRate:(double)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 sampleRate:(double)a1 error:(id *)a2 modelLoadCompletionHandler:(id /* block */)a3;
- (id)signatureWithError:(id *)a0;

@end
