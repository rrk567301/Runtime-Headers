@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    char _featureAvailable;
    char _featureComplete;
}

@property (nonatomic) unsigned long long tailorOptions;

- (int)priority;
- (double)period;
- (char)featureComplete;
- (char)currentPlatformIsSupported;
- (char)featureAvailable;
- (unsigned long long)featureCode;
- (id)incrementalKey;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void)timeoutFatal:(char)a0;

@end
