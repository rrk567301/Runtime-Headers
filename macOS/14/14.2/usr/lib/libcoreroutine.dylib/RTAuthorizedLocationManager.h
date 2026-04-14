@class RTDataProtectionManager, NSDate, RTMotionActivityManager, RTAuthorizedLocationStatus, RTDefaultsManager, RTAuthorizedLocationVisitLogStore, RTLearnedLocationManager, RTXPCActivityManager, RTAuthorizedLocationQueryMetrics, NSArray, RTLocationManager, RTDistanceCalculator, RTVisitManager;

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
@property (retain, nonatomic) RTAuthorizedLocationQueryMetrics *queryMetrics;
@property (retain) RTAuthorizedLocationStatus *overrideAuthorizedLocationStatus;
@property BOOL ignoreVisitRegistrationDate;
@property BOOL relaxTrustedTimeRequirement;
@property BOOL isFirstRunSinceSwUpgrade;

- (void).cxx_destruct;
- (void)_setup;
- (void)_fetchAuthorizedLocationStatus:(id /* block */)a0;
- (BOOL)_assertCurrentLocationTechnologyIntegrityForLocation:(id)a0 authorizedLocation:(id)a1 visit:(id)a2;
- (BOOL)_assertInVisitMotionIsConsistentForCurrentVisit:(id)a0;
- (BOOL)_assertMotionConsistencyForLocations:(id)a0 positionUncertaintyRate:(double)a1;
- (BOOL)_assertRecentMotionActivityAndLocationHistoryAreConsistentForLocation:(id)a0 authorizedLocation:(id)a1 visit:(id)a2;
- (BOOL)_assertUserTimeAndTrustedTimeAreConsistent;
- (id)_assertWeAreAtAuthorizedLocation:(id)a0;
- (void)_checkDefaults;
- (void)_checkStatusOverrideDefault;
- (void)_curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (void)_fetchAuthorizedLocations:(id /* block */)a0;
- (void)_fetchCurrentLocationWithHandler:(id /* block */)a0;
- (id)_getCurrentVisit;
- (void)_oneTimeRetroactivelyRegisterAllStoredVisits;
- (double)_positionUncertaintyRateFromMotionActivity:(id)a0 dateInterval:(id)a1;
- (void)_setupScheduledOneTimeRegistrationTask;
- (void)_setupVisitLogActivity;
- (void)_updateVisitLogWithTrustedTime:(id)a0 handler:(id /* block */)a1;
- (void)curateAuthorizedLocationsWithHandler:(id /* block */)a0;
- (void)fetchAuthorizedLocationStatus:(id /* block */)a0;
- (void)fetchAuthorizedLocations:(id /* block */)a0;
- (id)initWithVisitManager:(id)a0 locationManager:(id)a1 distanceCalculator:(id)a2 learnedLocationManager:(id)a3 motionActivityManager:(id)a4 visitLogStore:(id)a5 defaultsManager:(id)a6 xpcActivityManager:(id)a7 dataProtectionManager:(id)a8;
- (void)onDataProtectionNotification:(id)a0;
- (id)trustedTimeNow;

@end
