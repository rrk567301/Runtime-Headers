@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (double)pasteboardItemExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (BOOL)shouldUseAllowedWebsite;
- (double)userActivityExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (double)linguisticTriggerExpirySeconds;
- (double)calendarEventLocationExpirySeconds;
- (long long)locationAppPredictionInstallHalflife;
- (id)init;
- (unsigned long long)quickTypePredictionLimit;
- (id)donationBlockedWebsites;
- (double)namedEntitySourceExpirySeconds;
- (long long)appSwitcherPredictionExpiry;
- (void).cxx_destruct;
- (id)donationAllowedWebsites;
- (id)donationAllowedApps;
- (id)donationBlockedApps;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (BOOL)shouldUseAllowedApps;
- (long long)locationAppPredictionOverallLaunchFactor;
- (long long)expirySeconds;
- (double)foundInAppsSourceExpirySeconds;
- (unsigned long long)userActivityBatchSize;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (double)namedEntitySourceLookBackSeconds;
- (double)userActivityCandidateScore;
- (id)locationPredictionBlockedApps;

@end
