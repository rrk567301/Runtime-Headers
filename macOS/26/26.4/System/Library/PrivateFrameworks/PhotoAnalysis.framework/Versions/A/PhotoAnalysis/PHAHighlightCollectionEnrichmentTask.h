@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (id)initWithOptions:(id)a0;
- (int)priority;
- (void).cxx_destruct;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
