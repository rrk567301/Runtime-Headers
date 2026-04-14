@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (long long)locationAppPredictionInstallHalflife;
- (double)calendarEventLocationExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (BOOL)shouldUseAllowedWebsite;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)donationBlockedWebsites;
- (unsigned long long)quickTypePredictionLimit;
- (BOOL)shouldUseAllowedApps;
- (double)linguisticTriggerExpirySeconds;
- (long long)expirySeconds;
- (id)donationAllowedWebsites;
- (void).cxx_destruct;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (id)donationBlockedApps;
- (id)donationAllowedApps;
- (double)namedEntitySourceExpirySeconds;
- (double)userActivityExpirySeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)pasteboardItemExpirySeconds;
- (double)foundInAppsSourceExpirySeconds;
- (unsigned long long)userActivityBatchSize;
- (double)locationAppLastUseTimeoutSeconds;
- (id)init;
- (double)userActivityCandidateScore;
- (long long)appSwitcherPredictionExpiry;
- (double)foundInAppsSourceLookBackSeconds;
- (id)locationPredictionBlockedApps;

@end
