@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (int)priority;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
