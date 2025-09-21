@class RTAuthorizedLocationMetrics, RTPersistenceMirroringManager, RTDataProtectionManager, NSDate, RTMotionActivityManager, RTXPCActivityCriteria, RTAuthorizedLocationStatus, RTDefaultsManager, RTAuthorizedLocationBiometricsManager, RTPlatform, RTAuthorizedLocationVisitLogStore, RTLearnedLocationManager, RTXPCActivityManager, RTTrustedTimeCache, NSArray, RTLocationManager, RTAuthorizationManager, RTVisitManager, RTDistanceCalculator;

@interface RTAuthorizedLocationManager : RTService

@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, nonatomic) char isSupportedDevice;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain) NSArray *authorizedLocationArr;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain) NSDate *dateOfLastAuthorizedLocationsCuration;
@property (readonly, nonatomic) RTAuthorizedLocationVisitLogStore *visitLogStore;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager;
@property (readonly, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (nonatomic) char isUnlockedSinceBoot;
@property (readonly, nonatomic) RTTrustedTimeCache *trustedTimeCache;
@property char allowUnsecureTimeFallback;
@property (retain, nonatomic) RTAuthorizedLocationMetrics *metrics;
@property (readonly, nonatomic) RTPersistenceMirroringManager *persistenceMirroringManager;
@property (nonatomic) char isEraseInstallDatabaseInitializationRequired;
@property (nonatomic) unsigned long long eraseInstallDatabaseInitializationMaxAttemptCount;
@property (nonatomic) unsigned long long eraseInstallDatabaseInitializationAttemptCount;
@property (retain, nonatomic) NSDate *eraseInstallInitializationStartDate;
@property (retain, nonatomic) RTXPCActivityCriteria *eraseInstallInitializationXpcCriteria;
@property (retain) RTAuthorizedLocationStatus *overrideAuthorizedLocationStatus;
@property (nonatomic) char relaxTrustedTimeRequirement;
@property (nonatomic) char forceTrustedTimeUnavailability;
@property (readonly, nonatomic) RTAuthorizedLocationBiometricsManager *biometricsManager;
@property (retain, nonatomic) NSDate *mostRecentDateAtWhichDeviceDataIsTrusted;

+ (unsigned long long)_locationAvailabilityFromCLLocation:(id)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)_updateVisitLogWithTrustedTime:(id)a0 isRetroRegistrationTime:(char)a1 handler:(id /* block */)a2;
- (char)_assertMotionConsistencyForLocations:(id)a0 positionUncertaintyRate:(double)a1;
- (char)_assertRecentLocationTechnologyQualityForAuthorizedLocation:(id)a0 visit:(id)a1;
- (char)_assertRecentMotionActivityAndLocationHistoryAreConsistentForAuthorizedLocation:(id)a0 visit:(id)a1;
- (char)_assertUserTimeAndTrustedTimeAreConsistent;
- (id)_assertWeAreAtAuthorizedLocation:(id)a0;
- (void)_checkConfiguration;
- (void)_checkStatusOverrideDefault;
- (unsigned long long)_computeLocationTechnologyAvailabilityForDateInterval:(id)a0;
- (unsigned long long)_computeLocationTechnologyExpectationFromHistoricalAvailability:(id)a0;
- (void)_curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (void)_fetchAuthorizedLocationExtendedStatus:(id /* block */)a0;
- (void)_fetchAuthorizedLocationExtendedStatusWithMetrics:(id /* block */)a0;
- (void)_fetchAuthorizedLocations:(id /* block */)a0;
- (void)_fetchCurrentLocationWithHandler:(id /* block */)a0;
- (id)_getCurrentVisit;
- (char)_isExpeditedSyncAndLearnRequired;
- (char)_isRoutineEnabled;
- (char)_loadEraseInstallInitializationXPCCriteriaFromDefaults;
- (char)_oneTimeRetroactivelyRegisterAllStoredVisits;
- (double)_positionUncertaintyRateFromMotionActivity:(id)a0 dateInterval:(id)a1;
- (void)_registerForDeviceUnlockNotification;
- (void)_runEraseInstallDatabaseInitialization:(id /* block */)a0;
- (void)_setupEraseInstallDatabaseInitializationActivity;
- (void)_setupVisitLogActivity;
- (void)_updateMostRecentDateAtWhichDeviceDataIsTrusted;
- (void)_updateReferenceTimeBoundsFromVisitLog;
- (void)curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (void)eraseVisitLogDatabase:(id /* block */)a0;
- (void)fetchAuthorizedLocationExtendedStatus:(id /* block */)a0;
- (void)fetchAuthorizedLocations:(id /* block */)a0;
- (void)fetchVisitLogsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithVisitManager:(id)a0 locationManager:(id)a1 distanceCalculator:(id)a2 learnedLocationManager:(id)a3 motionActivityManager:(id)a4 visitLogStore:(id)a5 defaultsManager:(id)a6 xpcActivityManager:(id)a7 dataProtectionManager:(id)a8 persistenceMirroringManager:(id)a9 platform:(id)a10 authorizationManager:(id)a11;
- (void)onDataProtectionNotification:(id)a0;
- (void)runEraseInstallDatabaseInitialization:(id /* block */)a0;
- (id)trustedTimeNow;

@end
