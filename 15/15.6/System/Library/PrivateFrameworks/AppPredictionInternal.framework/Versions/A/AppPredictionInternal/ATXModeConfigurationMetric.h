@class NSString, NSNumber;

@interface ATXModeConfigurationMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSString *modeSemanticType;
@property (nonatomic) char hasSmartTrigger;
@property (nonatomic) char hasAreaTrigger;
@property (nonatomic) char hasTimeTrigger;
@property (nonatomic) char hasAppTrigger;
@property (nonatomic) char hasScreenActivityTrigger;
@property (nonatomic) char hasWorkoutTrigger;
@property (nonatomic) char hasSleepTrigger;
@property (nonatomic) char hasDrivingTrigger;
@property (nonatomic) unsigned long long numAllowedApps;
@property (nonatomic) unsigned long long numAllowedContacts;
@property (nonatomic) unsigned long long numDeniedApps;
@property (nonatomic) unsigned long long numDeniedContacts;
@property (nonatomic) char isAutomaticallyGenerated;
@property (nonatomic) char doesImpactAvailability;
@property (nonatomic) char hasCustomHomeScreen;
@property (nonatomic) unsigned long long numCustomHomeScreens;
@property (nonatomic) char hasCustomHomeScreenUsedInOtherModes;
@property (nonatomic) unsigned long long numLockScreenPosters;
@property (copy, nonatomic) NSString *appConfigurationType;
@property (copy, nonatomic) NSString *contactConfigurationType;
@property (nonatomic) unsigned long long numAcceptedSuggestedHomePages;
@property (nonatomic) unsigned long long numAcceptedSuggestedLockScreens;
@property (nonatomic) unsigned long long numAcceptedSuggestedApps;
@property (nonatomic) unsigned long long numAcceptedSuggestedContacts;
@property (nonatomic) char didRemoveSuggestedPage;
@property (nonatomic) char isSleepMigrated;
@property (nonatomic) unsigned long long numAppConfigurations;
@property (nonatomic) char isSharingAcrossDevices;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSNumber *deploymentId;
@property (nonatomic) char wasQuickStartPlatterShown;
@property (nonatomic) char wasColoringBookSeen;
@property (nonatomic) char isIntelligentBreakthroughEnabled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end
