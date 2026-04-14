@class RTMapServiceManager, RTPlaceTypeClassifierMetricsCalculator, NSObject, RTPlatform, RTVisitManager, RTMapsSupportManager, RTDefaultsManager, RTContactsManager, RTDistanceCalculator, RTLearnedLocationStore, RTLocationManager;
@protocol OS_dispatch_queue;

@interface RTPlaceTypeClassifier : NSObject

@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)classifyWithError:(id *)a0;
- (id)coalescePlacesFromExperts:(id)a0;
- (void)donateInferredPlaces:(id)a0;
- (id)getClassificationsFromExperts:(id)a0 error:(id *)a1;
- (id)getExperts;
- (id)getStoredPlacesWithError:(id *)a0;
- (id)initWithContactsManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationStore:(id)a3 locationManager:(id)a4 mapServiceManager:(id)a5 mapsSupportManager:(id)a6 placeTypeClassifierMetricsCalculator:(id)a7 platform:(id)a8 queue:(id)a9 visitManager:(id)a10;
- (BOOL)isRottedMeCard:(id)a0 inferredPlace:(id)a1;
- (id)mergeExistingPlaces:(id)a0 intoUpdatedPlace:(id)a1 typesInMeCard:(id)a2;
- (BOOL)processExpertClassifications:(id)a0 error:(id *)a1;
- (id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)a0;
- (BOOL)updatePlaces:(id)a0 error:(id *)a1;

@end
