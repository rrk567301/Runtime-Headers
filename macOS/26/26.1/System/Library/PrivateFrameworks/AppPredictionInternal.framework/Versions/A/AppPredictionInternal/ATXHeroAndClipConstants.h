@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)appClipsErrorDomain;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (id)appClipsNotificationCategoryIdentifier;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (double)heroAppMinimumRejects;
- (id)appClipsNotificationId;
- (double)appClipsHighConfidenceScoreThreshold;
- (long long)appClipsDecodeErrorCode;
- (int)heroAppIndexNotSet;
- (double)appClipsMediumConfidenceScoreThreshold;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)appClipsPerAppClipEngagementThreshold;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)heroAppMinRefreshInterval;
- (id)appClipsModelVersion;
- (double)appClipsPerAppClipMinRejects;
- (id)heroAppPredictionsKey;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)heroAppWorstCaseLocationAccuracy;
- (id)defaultHeroPOICategory;
- (long long)appClipsLaunchErrorCode;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (id)appClipsNotificationLockscreenIdentifier;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (void).cxx_destruct;
- (double)appClipsOverallEngagementThreshold;
- (unsigned long long)appShadowLogSamplesPerDay;
- (double)heroAppEngagementThreshold;
- (double)heroAppTileMaxErrorDistance;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (double)appClipsOverallMinRejects;
- (double)heroAppPredictionExpirationInterval;
- (id)init;

@end
