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
- (double)foundInAppsSourceExpirySeconds;
- (double)userActivityExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (double)pasteboardItemExpirySeconds;
- (double)linguisticTriggerExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)calendarEventLocationExpirySeconds;
- (long long)expirySeconds;
- (double)namedEntitySourceExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (unsigned long long)quickTypePredictionLimit;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (long long)appSwitcherPredictionExpiry;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (BOOL)shouldUseAllowedWebsite;
- (BOOL)shouldUseAllowedApps;
- (id)locationPredictionBlockedApps;
- (id)donationAllowedWebsites;
- (id)donationBlockedWebsites;
- (id)donationAllowedApps;

@end
