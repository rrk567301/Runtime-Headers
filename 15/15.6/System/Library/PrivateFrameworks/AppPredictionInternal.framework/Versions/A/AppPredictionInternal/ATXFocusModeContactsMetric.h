@class NSString, NSNumber;

@interface ATXFocusModeContactsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long focusMode;
@property (retain, nonatomic) NSString *activeConfigurationType;
@property (retain, nonatomic) NSNumber *entityModeEntityScore;
@property (retain, nonatomic) NSNumber *classConditionalProbability;
@property (retain, nonatomic) NSNumber *contactMuted;
@property (retain, nonatomic) NSNumber *globalPopularity;
@property (retain, nonatomic) NSNumber *modePopularity;
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfEntity;
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *notificationsClearedInMode;
@property (retain, nonatomic) NSNumber *notificationsClearedGlobally;
@property (retain, nonatomic) NSNumber *posteriorProbability;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *notificationsReceivedGlobally;
@property (retain, nonatomic) NSNumber *notificationsReceivedInMode;
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity;
@property (nonatomic) char contactEngagedGloballyOverLastNDays;
@property (nonatomic) char contactEngagedInModeOverLastNDays;
@property (nonatomic) char contactIsEmergency;
@property (nonatomic) char contactIsFavorite;
@property (nonatomic) char contactIsiCloudFamilyMember;
@property (nonatomic) char contactIsPinned;
@property (nonatomic) char contactIsVIP;
@property (nonatomic) char contactMessageHideAlerts;
@property (nonatomic) char isContactCandidateSuggestion;
@property (nonatomic) char isContactRecommendedSuggestion;
@property (nonatomic) char wasContactSuggestedDuringModeSetup;
@property (nonatomic) char wasContactSuggestionDuringModeSetupAccepted;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSNumber *deploymentId;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
