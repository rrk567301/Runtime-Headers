@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (int)priority;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (unsigned long long)tailorOptions;

@end
