@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (long long)appClipsLaunchErrorCode;
- (double)appClipsPerAppClipMinRejects;
- (id)appClipsNotificationId;
- (double)appClipsPerAppClipEngagementThreshold;
- (id)appClipsModelVersion;
- (unsigned long long)appShadowLogSamplesPerDay;
- (id)defaultHeroPOICategory;
- (double)heroAppMinimumRejects;
- (double)heroAppPredictionExpirationInterval;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (double)appClipsOverallEngagementThreshold;
- (id)appClipsErrorDomain;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (void).cxx_destruct;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)appClipsOverallMinRejects;
- (double)heroAppWorstCaseLocationAccuracy;
- (double)appClipsHighConfidenceScoreThreshold;
- (id)init;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)heroAppEngagementThreshold;
- (double)heroAppMinRefreshInterval;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (id)heroAppPredictionsKey;
- (long long)appClipsDecodeErrorCode;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (double)appClipsMediumConfidenceScoreThreshold;
- (int)heroAppIndexNotSet;
- (double)heroAppTileMaxErrorDistance;
- (id)appClipsNotificationCategoryIdentifier;
- (id)appClipsNotificationLockscreenIdentifier;

@end
