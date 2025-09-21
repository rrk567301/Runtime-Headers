@class NSDictionary;

@interface MLOutputBackingsVerifier : NSObject

@property (readonly, nonatomic) NSDictionary *outputDescriptions;

- (void).cxx_destruct;
- (char)_verifyMultiArrayOutputBacking:(id)a0 forFeature:(id)a1 error:(id *)a2;
- (char)_verifyOutputBacking:(id)a0 forFeature:(id)a1 error:(id *)a2;
- (char)_verifyPixelBufferOutputBacking:(struct __CVBuffer { } *)a0 forFeature:(id)a1 error:(id *)a2;
- (id)initWithOutputDescriptions:(id)a0;
- (char)verifyOutputBackings:(id)a0 predictionUsesBatch:(char)a1 error:(id *)a2;

@end
