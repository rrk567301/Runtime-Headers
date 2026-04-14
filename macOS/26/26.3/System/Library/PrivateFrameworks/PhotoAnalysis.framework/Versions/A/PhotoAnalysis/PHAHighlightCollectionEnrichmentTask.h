@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)initWithOptions:(id)a0;
- (id)taskClassDependencies;
- (int)priority;
- (void).cxx_destruct;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
