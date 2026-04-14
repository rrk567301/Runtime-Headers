@interface PISemanticStyleAutoCalculator : NUAutoCalculator

+ (BOOL)canRenderStylesOnComposition:(id)a0;
+ (BOOL)isStylableFromImageProperties:(id)a0;

- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)_resultFromImageProperties:(id)a0;

@end
