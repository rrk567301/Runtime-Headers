@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
