@class RTAuthorizedLocationZDRLocationsStore, NSMutableArray, RTTrustedTimeCache, RTAuthorizedLocationMetrics, RTPlatform, RTVisitManager, RTAuthorizedLocationManagerCachedStatus, RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationManager, NSObject, RTLocationManager;
@protocol OS_dispatch_queue;

@interface RTAuthorizedLocationZDRLocationManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTAuthorizedLocationManagerCachedStatus *confirmationStatus;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTPlatform *platform;
@property (nonatomic) BOOL isSupportedDevice;
@property (retain, nonatomic) RTAuthorizedLocationZDRLocationsStore *zdrLocationsStore;
@property (retain, nonatomic) NSMutableArray *zdrLocationsMemoryCopy;
@property (nonatomic) BOOL isZDRDebugEnabled;
@property (readonly, nonatomic) RTTrustedTimeCache *trustedTimeCache;
@property (nonatomic) BOOL relaxTrustedTimeRequirement;
@property BOOL allowUnsecureTimeFallback;
@property (nonatomic) BOOL forceTrustedTimeUnavailability;
@property (nonatomic) BOOL isUnlockedSinceBoot;
@property (retain, nonatomic) RTAuthorizedLocationMetrics *metrics;

- (void).cxx_destruct;
- (BOOL)_mergeCRClassifiedLOIWithZDRDb:(id)a0;
- (void)_removeStaleEntriesFromDatabase;
- (void)_computeALOIMetrics:(id)a0 reasonCode:(long long)a1;
- (long long)_assertWeAreAtAnyZDRLocation:(id)a0;
- (long long)_assertWeAreAtSpecificZDRLocation:(id)a0 recentLocations:(id)a1;
- (long long)_assertWeAreAtZDRLocationWithVisit:(id)a0;
- (void)_collectCurationMetric;
- (void)_collectMetric:(long long)a0 reasonCode:(long long)a1 zdrComputationTime_s:(double)a2;
- (void)_collectZdrConfirmationMetric:(double)a0 zdrLoc:(id)a1;
- (id)_deduceSetupLocation;
- (void)_deleteZDRLocationEntryFromDb:(id)a0;
- (void)_determineSetupLocation;
- (id)_fetchCurrentLocation;
- (id)_fetchLatestLocationFromListOfLocations:(id)a0;
- (id)_fetchRecentLocations;
- (BOOL)_fetchStoredZDRLocations;
- (id)_getHomeWorkSchoolLois;
- (void)_getSetupLocationFromZDRLocations:(id /* block */)a0;
- (int)_getSetupLocationValidAgeSeconds;
- (void)_initMetric;
- (void)_initZDR;
- (long long)_isDeviceCurrentlyAtAuthorizedLocation:(id)a0;
- (BOOL)_isDeviceCurrentlyAtZDRLocation:(id)a0 handler:(id /* block */)a1;
- (BOOL)_isDistanceBetween2PointsInRange:(id)a0 aLoi:(id)a1 range:(double)a2;
- (BOOL)_isNullLocation:(double)a0 lon:(double)a1;
- (BOOL)_isZdrLocationTrusted:(id)a0;
- (void)_purgeExtraSetupLocations;
- (void)_readDefaultsValues;
- (void)_refreshSetupLocationToDb:(id)a0 locToStore:(id)a1;
- (void)_storeClassifiedLocationToDB:(id)a0;
- (BOOL)_storeZDRLocationEntryToDb:(id)a0;
- (void)_updateALOILiveMetrics:(id)a0 aLoi:(id)a1 reasonCode:(long long)a2;
- (void)_updateSetupLocationToDb:(id)a0;
- (void)fetchAuthorizedLocationZDRLocations:(id /* block */)a0;
- (void)fetchZDRLocationStatus:(id)a0 fullSecurityAloiList:(id)a1 handler:(id /* block */)a2;
- (id)initZDRLocationManager:(id)a0 visitManager:(id)a1 distanceCalculator:(id)a2 locationManager:(id)a3 learnedLocationManager:(id)a4 defaultsManager:(id)a5 confirmationStatus:(id)a6 zdrLocationsStore:(id)a7 platform:(id)a8 metrics:(id)a9;
- (void)onFirstUnlock;
- (id)trustedTimeNow;

@end
