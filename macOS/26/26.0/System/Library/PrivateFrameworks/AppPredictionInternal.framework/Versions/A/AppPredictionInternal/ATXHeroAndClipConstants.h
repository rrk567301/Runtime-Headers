@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)defaultHeroPOICategory;
- (long long)appClipsLaunchErrorCode;
- (double)heroAppTileMaxErrorDistance;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (int)heroAppIndexNotSet;
- (double)appClipsOverallEngagementThreshold;
- (id)appClipsNotificationId;
- (double)appClipsMediumConfidenceScoreThreshold;
- (double)heroAppMinRefreshInterval;
- (double)heroAppMinimumRejects;
- (double)heroAppWorstCaseLocationAccuracy;
- (id)appClipsNotificationCategoryIdentifier;
- (id)init;
- (double)appClipsPerAppClipEngagementThreshold;
- (id)appClipsModelVersion;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)appClipsOverallMinRejects;
- (id)heroAppPredictionsKey;
- (long long)appClipsDecodeErrorCode;
- (id)appClipsErrorDomain;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (unsigned long long)appShadowLogSamplesPerDay;
- (id)appClipsNotificationLockscreenIdentifier;
- (double)appClipsHighConfidenceScoreThreshold;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)heroAppPredictionExpirationInterval;
- (double)heroAppEngagementThreshold;
- (double)appClipsPerAppClipMinRejects;
- (void).cxx_destruct;

@end
