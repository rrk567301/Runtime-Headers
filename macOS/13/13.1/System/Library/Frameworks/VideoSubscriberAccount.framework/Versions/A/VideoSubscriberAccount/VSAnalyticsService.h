@class NSString;

@interface VSAnalyticsService : VSServiceListener <VSAnalyticsServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)recordFederatedPunchoutEventWithError:(id)a0 metadata:(id)a1;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)a0;

@end
