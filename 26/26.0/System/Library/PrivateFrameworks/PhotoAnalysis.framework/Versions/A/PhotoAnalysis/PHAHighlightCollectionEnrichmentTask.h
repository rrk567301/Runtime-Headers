@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (id)initWithOptions:(id)a0;
- (id)taskClassDependencies;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)timeoutFatal:(BOOL)a0;
- (void).cxx_destruct;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
