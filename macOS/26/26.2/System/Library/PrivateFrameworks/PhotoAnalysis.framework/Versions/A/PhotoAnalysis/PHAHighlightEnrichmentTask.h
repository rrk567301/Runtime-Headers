@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _featureAvailable;
    BOOL _featureComplete;
}

@property (nonatomic) unsigned long long tailorOptions;

- (double)period;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)featureComplete;
- (BOOL)featureAvailable;
- (unsigned long long)featureCode;

@end
