@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (BOOL)shouldUseAllowedApps;
- (id)donationAllowedApps;
- (id)donationBlockedApps;
- (id)donationBlockedWebsites;
- (long long)locationAppPredictionInstallHalflife;
- (double)pasteboardItemExpirySeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)foundInAppsSourceLookBackSeconds;
- (double)foundInAppsSourceExpirySeconds;
- (double)calendarEventLocationExpirySeconds;
- (id)init;
- (BOOL)shouldUseAllowedWebsite;
- (unsigned long long)userActivityBatchSize;
- (id)donationAllowedWebsites;
- (long long)expirySeconds;
- (double)userActivityExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)namedEntitySourceLookBackSeconds;
- (double)userActivityCandidateScore;
- (double)linguisticTriggerExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (id)locationPredictionBlockedApps;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)namedEntitySourceExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)appSwitcherPredictionExpiry;
- (void).cxx_destruct;

@end
