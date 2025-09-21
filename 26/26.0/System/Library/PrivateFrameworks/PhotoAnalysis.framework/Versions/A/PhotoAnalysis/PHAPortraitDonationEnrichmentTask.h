@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
