@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (double)pasteboardItemExpirySeconds;
- (id)donationAllowedApps;
- (id)donationAllowedWebsites;
- (double)locationAppLastUseTimeoutSeconds;
- (id)locationPredictionBlockedApps;
- (double)userActivityExpirySeconds;
- (unsigned long long)userActivityBatchSize;
- (id)donationBlockedWebsites;
- (unsigned long long)quickTypePredictionLimit;
- (long long)appSwitcherPredictionExpiry;
- (long long)expirySeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (double)foundInAppsSourceExpirySeconds;
- (BOOL)shouldUseAllowedWebsite;
- (void).cxx_destruct;
- (BOOL)shouldUseAllowedApps;
- (id)donationBlockedApps;
- (long long)locationAppPredictionInstallHalflife;
- (id)init;
- (double)userActivityCandidateScore;
- (double)calendarEventLocationExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)namedEntitySourceExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)linguisticTriggerExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;

@end
