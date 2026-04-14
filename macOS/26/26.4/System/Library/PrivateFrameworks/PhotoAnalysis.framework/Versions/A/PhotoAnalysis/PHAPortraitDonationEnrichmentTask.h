@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)enrichmentProcessor;

@end
