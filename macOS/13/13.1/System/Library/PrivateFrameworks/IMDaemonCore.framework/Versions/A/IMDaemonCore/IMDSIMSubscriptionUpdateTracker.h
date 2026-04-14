@interface IMDSIMSubscriptionUpdateTracker : NSObject

+ (id)sharedTrackerInstance;

- (id)init;
- (void)activeSubscriptionsDidChange;

@end
