@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)heroAppPredictionExpirationInterval;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (long long)appClipsLaunchErrorCode;
- (int)heroAppIndexNotSet;
- (double)appClipsPerAppClipMinRejects;
- (long long)appClipsDecodeErrorCode;
- (id)appClipsNotificationLockscreenIdentifier;
- (id)defaultHeroPOICategory;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (id)init;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (id)appClipsNotificationId;
- (double)heroAppTileMaxErrorDistance;
- (double)heroAppMinRefreshInterval;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)heroAppMinimumRejects;
- (double)appClipsOverallMinRejects;
- (id)appClipsModelVersion;
- (void).cxx_destruct;
- (unsigned long long)appShadowLogSamplesPerDay;
- (double)appClipsHighConfidenceScoreThreshold;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)appClipsOverallEngagementThreshold;
- (id)heroAppPredictionsKey;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)appClipsMediumConfidenceScoreThreshold;
- (id)appClipsNotificationCategoryIdentifier;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (double)heroAppEngagementThreshold;
- (id)appClipsErrorDomain;
- (double)heroAppWorstCaseLocationAccuracy;
- (unsigned long long)appClipShadowLogSamplesPerDay;

@end
