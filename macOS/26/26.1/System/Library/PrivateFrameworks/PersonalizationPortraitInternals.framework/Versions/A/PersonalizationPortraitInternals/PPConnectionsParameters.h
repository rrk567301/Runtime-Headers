@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (long long)locationAppPredictionInstallHalflife;
- (double)foundInAppsSourceLookBackSeconds;
- (double)userActivityExpirySeconds;
- (id)donationBlockedWebsites;
- (id)donationAllowedWebsites;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (long long)appSwitcherPredictionExpiry;
- (double)locationAppLastUseTimeoutSeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)locationPredictionBlockedApps;
- (BOOL)shouldUseAllowedWebsite;
- (double)namedEntitySourceExpirySeconds;
- (double)calendarEventLocationExpirySeconds;
- (double)foundInAppsSourceExpirySeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)expirySeconds;
- (BOOL)shouldUseAllowedApps;
- (double)namedEntitySourceLookBackSeconds;
- (id)donationAllowedApps;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (double)pasteboardItemExpirySeconds;
- (double)linguisticTriggerExpirySeconds;
- (void).cxx_destruct;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (unsigned long long)quickTypePredictionLimit;
- (id)donationBlockedApps;
- (id)init;

@end
