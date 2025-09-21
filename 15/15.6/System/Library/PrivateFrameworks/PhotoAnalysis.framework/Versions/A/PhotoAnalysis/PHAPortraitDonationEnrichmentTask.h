@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (char)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (void)timeoutFatal:(char)a0;

@end
