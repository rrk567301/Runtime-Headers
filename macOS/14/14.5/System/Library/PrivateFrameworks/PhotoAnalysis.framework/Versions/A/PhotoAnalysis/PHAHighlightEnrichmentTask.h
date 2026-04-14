@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _didProduceContent;
}

@property (nonatomic) unsigned long long tailorOptions;

- (int)priority;
- (double)period;
- (BOOL)currentPlatformIsSupported;
- (BOOL)didProduceContent;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void)timeoutFatal:(BOOL)a0;

@end
