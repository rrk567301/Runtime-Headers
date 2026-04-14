@interface ICQEngagementReporter : NSObject

+ (void)sendEventFor:(long long)a0 withBundleID:(id)a1 link:(id)a2;
+ (void)_sendImpressionEventWithName:(id)a0 bundleID:(id)a1;
+ (void)shouldShowOpportunityBubbleWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)fetchBubbleContentWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (id)_createOpportunityBubbleFrom:(id)a0 bundleID:(id)a1;
+ (void)_sendBubbleDisplayedEventFor:(id)a0;
+ (void)_sendSubscriptionChangedEvent;
+ (id)_eventNameForEngagementType:(long long)a0;
+ (id)_placementDictionary;

@end
