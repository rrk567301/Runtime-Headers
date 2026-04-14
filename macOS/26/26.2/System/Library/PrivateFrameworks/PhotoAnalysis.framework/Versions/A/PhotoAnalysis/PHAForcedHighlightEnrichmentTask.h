@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (double)period;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (unsigned long long)tailorOptions;

@end
