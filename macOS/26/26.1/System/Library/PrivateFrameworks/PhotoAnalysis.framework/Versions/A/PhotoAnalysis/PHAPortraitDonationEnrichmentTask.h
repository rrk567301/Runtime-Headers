@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (void)timeoutFatal:(BOOL)a0;
- (double)period;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
