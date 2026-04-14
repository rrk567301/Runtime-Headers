@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _featureAvailable;
    BOOL _featureComplete;
}

@property (nonatomic) unsigned long long tailorOptions;

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (int)priority;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (BOOL)featureComplete;
- (BOOL)featureAvailable;
- (unsigned long long)featureCode;

@end
