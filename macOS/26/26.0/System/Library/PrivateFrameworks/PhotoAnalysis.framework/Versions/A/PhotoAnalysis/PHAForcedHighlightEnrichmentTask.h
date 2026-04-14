@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (double)period;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (unsigned long long)tailorOptions;

@end
