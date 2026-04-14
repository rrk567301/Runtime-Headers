@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (id)initWithOptions:(id)a0;
- (void)timeoutFatal:(BOOL)a0;
- (double)period;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (void).cxx_destruct;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;

@end
