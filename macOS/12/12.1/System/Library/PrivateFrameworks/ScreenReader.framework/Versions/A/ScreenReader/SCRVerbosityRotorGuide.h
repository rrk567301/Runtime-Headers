@interface SCRVerbosityRotorGuide : SCRGuide

- (void)open;
- (void)close;
- (BOOL)handlesEvents;
- (void)_handleVerbositySelectionEvent:(id)a0;
- (long long)verbosityRotorItemIndexForEvent:(id)a0 request:(id *)a1 force:(BOOL)a2;
- (void)informVerbosityRotorGuideOfNewSelection:(id)a0;

@end
