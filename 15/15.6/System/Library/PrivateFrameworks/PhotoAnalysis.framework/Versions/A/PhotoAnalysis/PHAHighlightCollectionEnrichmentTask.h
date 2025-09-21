@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (int)priority;
- (double)period;
- (char)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
