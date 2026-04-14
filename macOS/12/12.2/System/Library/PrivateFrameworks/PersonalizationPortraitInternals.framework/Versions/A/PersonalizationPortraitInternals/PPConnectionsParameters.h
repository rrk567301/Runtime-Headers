@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)donationBlockedApps;
- (long long)expirySeconds;
- (double)userActivityExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)namedEntitySourceExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (double)foundInAppsSourceExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)calendarEventLocationExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (long long)appSwitcherPredictionExpiry;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)linguisticTriggerExpirySeconds;
- (double)pasteboardItemExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (BOOL)shouldUseAllowedWebsite;
- (BOOL)shouldUseAllowedApps;
- (id)locationPredictionBlockedApps;
- (id)donationAllowedWebsites;
- (id)donationBlockedWebsites;
- (id)donationAllowedApps;

@end
