@interface PISemanticStyleAutoCalculator : NUAutoCalculator

+ (char)canRenderStylesOnComposition:(id)a0;
+ (char)isStylableFromImageProperties:(id)a0 error:(out id *)a1;

- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)_resultFromImageProperties:(id)a0 error:(out id *)a1;

@end
