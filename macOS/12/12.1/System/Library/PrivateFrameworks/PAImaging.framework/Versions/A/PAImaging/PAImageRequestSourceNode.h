@class PAImageRequestCacheHint;

@interface PAImageRequestSourceNode : NUCGImageSourceNode

@property (retain) PAImageRequestCacheHint *cacheHint;

- (void).cxx_destruct;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)_load:(out id *)a0;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;

@end
