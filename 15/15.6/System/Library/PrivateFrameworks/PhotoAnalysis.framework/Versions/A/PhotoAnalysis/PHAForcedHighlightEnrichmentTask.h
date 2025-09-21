@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (int)priority;
- (double)period;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (char)currentPlatformIsSupported;
- (id)incrementalKey;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (unsigned long long)tailorOptions;
- (void)timeoutFatal:(char)a0;

@end
