@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)heroAppMinRefreshInterval;
- (id)appClipsNotificationId;
- (double)appClipsOverallEngagementThreshold;
- (double)appClipsHighConfidenceScoreThreshold;
- (double)heroAppWorstCaseLocationAccuracy;
- (double)heroAppTileMaxErrorDistance;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (id)appClipsNotificationCategoryIdentifier;
- (double)heroAppMinimumRejects;
- (id)appClipsNotificationLockscreenIdentifier;
- (unsigned long long)appShadowLogSamplesPerDay;
- (long long)appClipsLaunchErrorCode;
- (double)appClipsOverallMinRejects;
- (int)heroAppIndexNotSet;
- (void).cxx_destruct;
- (id)appClipsErrorDomain;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)heroAppPredictionExpirationInterval;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (id)heroAppPredictionsKey;
- (id)appClipsModelVersion;
- (long long)appClipsDecodeErrorCode;
- (double)appClipsMediumConfidenceScoreThreshold;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (id)init;
- (double)heroAppEngagementThreshold;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsPerAppClipMinRejects;
- (id)defaultHeroPOICategory;

@end
