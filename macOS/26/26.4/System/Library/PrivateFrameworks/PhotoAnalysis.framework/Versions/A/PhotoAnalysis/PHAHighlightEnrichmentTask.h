@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _featureAvailable;
    BOOL _featureComplete;
}

@property (nonatomic) unsigned long long tailorOptions;

- (double)period;
- (int)priority;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)featureComplete;
- (BOOL)featureAvailable;
- (unsigned long long)featureCode;

@end
