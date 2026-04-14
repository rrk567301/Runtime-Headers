@class RTAuthorizedLocationCurationMetrics, RTDataProtectionManager, NSDate, RTMotionActivityManager, RTAuthorizedLocationStatus, RTDefaultsManager, RTAuthorizedLocationVisitLogStore, RTTrustedTimeCache, RTXPCActivityManager, RTAuthorizedLocationQueryMetrics, NSArray, RTLearnedLocationManager, RTDistanceCalculator, RTVisitManager, RTLocationManager;

@interface RTAuthorizedLocationManager : RTService

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
@property (readonly, nonatomic) RTTrustedTimeCache *trustedTimeCache;
@property (retain, nonatomic) RTAuthorizedLocationQueryMetrics *queryMetrics;
@property (retain, nonatomic) RTAuthorizedLocationCurationMetrics *curationMetrics;
@property (retain, nonatomic) NSDate *lastMetricSubmissionDate;
@property (retain) RTAuthorizedLocationStatus *overrideAuthorizedLocationStatus;
@property BOOL ignoreVisitRegistrationDate;
@property BOOL relaxTrustedTimeRequirement;
@property BOOL isFirstRunSinceSwUpgrade;
@property unsigned long long retroRegistrationAttemptCount;
@property BOOL isUnlockedSinceBoot;

- (void).cxx_destruct;
- (void)_setup;
- (void)_fetchAuthorizedLocationStatus:(id /* block */)a0;
- (void)_updateVisitLogWithTrustedTime:(id)a0 isRetroRegistrationTime:(BOOL)a1 handler:(id /* block */)a2;
- (BOOL)_assertMotionConsistencyForLocations:(id)a0 positionUncertaintyRate:(double)a1;
- (BOOL)_assertRecentLocationTechnologyQualityForAuthorizedLocation:(id)a0 visit:(id)a1;
- (BOOL)_assertRecentMotionActivityAndLocationHistoryAreConsistentForAuthorizedLocation:(id)a0 visit:(id)a1;
- (BOOL)_assertUserTimeAndTrustedTimeAreConsistent;
- (id)_assertWeAreAtAuthorizedLocation:(id)a0;
- (void)_checkDefaults;
- (void)_checkStatusOverrideDefault;
- (void)_curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (BOOL)_decodeTimeSourceWithValue:(id)a0 isRetroRegistration:(BOOL *)a1 isTrusted:(BOOL *)a2;
- (id)_encodeTimeSourceWithValue:(id)a0 isTrusted:(BOOL)a1 isRetroRegistration:(BOOL)a2;
- (void)_fetchAuthorizedLocations:(id /* block */)a0;
- (void)_fetchCurrentLocationWithHandler:(id /* block */)a0;
- (id)_getCurrentVisit;
- (void)_oneTimeRetroactivelyRegisterAllStoredVisits;
- (double)_positionUncertaintyRateFromMotionActivity:(id)a0 dateInterval:(id)a1;
- (void)_setupScheduledOneTimeRegistrationTask;
- (void)_setupVisitLogActivity;
- (void)_updateReferenceTimeBoundsFromVisitLog;
- (void)curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (void)fetchAuthorizedLocationStatus:(id /* block */)a0;
- (void)fetchAuthorizedLocations:(id /* block */)a0;
- (id)initWithVisitManager:(id)a0 locationManager:(id)a1 distanceCalculator:(id)a2 learnedLocationManager:(id)a3 motionActivityManager:(id)a4 visitLogStore:(id)a5 defaultsManager:(id)a6 xpcActivityManager:(id)a7 dataProtectionManager:(id)a8;
- (void)onDataProtectionNotification:(id)a0;
- (id)trustedTimeNow;

@end
