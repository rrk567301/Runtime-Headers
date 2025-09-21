@class NSDate, NSMutableArray, RTGeoRoadDataStore, NSString, RTElevationAdjuster, RTSynthesizedLocationStore, RTTripClusterRoadTransitionsStore, RTDefaultsManager, RTTripSegmentStore, RTDistanceCalculator, RTLearnedLocationStore, RTTripSegment;

@interface RTTripSegmentManager : RTService <RTPurgable, RTDiagnosticProvider>

@property (retain, nonatomic) RTTripSegmentStore *tripSegmentStore;
@property (retain, nonatomic) RTSynthesizedLocationStore *locationStore;
@property (retain, nonatomic) RTGeoRoadDataStore *geoRoadDataStore;
@property (retain, nonatomic) RTTripClusterRoadTransitionsStore *tripSegmentRoadTransitionsStore;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTElevationAdjuster *elevationAdjuster;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTTripSegment *tripSegmentUnderConstruction;
@property (retain, nonatomic) NSDate *tripSegmentUnderConstructionLastLocationTimestamp;
@property (nonatomic) BOOL tripSegmentUnderConstructionFavorNewerLocationsOverOlderLocations;
@property BOOL isTripSegmentGenerationEnabled;
@property (nonatomic) BOOL checkForValidAltitudeSpeedAccuracy;
@property (retain, nonatomic) NSMutableArray *tripSegmentRoadTransitionsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;
+ (long long)translateModeOfTransport:(long long)a0;
+ (long long)tripSegmentUUIDTypeFromUUID:(id)a0;
+ (id)uuidForTripSegmentOfType:(long long)a0;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (BOOL)_generateDiagnosticFilesAtURL:(id)a0 error:(id *)a1;
- (void)_setup;
- (void)fetchLocationsCountForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentMetadataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_addTripSegmentDataWithIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4 locations:(id)a5 roads:(id)a6 isEndOfSegment:(BOOL)a7 originLocation:(id)a8 destinationLocation:(id)a9 tripSegSequenceNumber:(int)a10 tripSegSequenceNumberMax:(int)a11 tripCommuteID:(id)a12 handler:(id /* block */)a13;
- (void)_addTripSegmentRoadTransitions:(id)a0 tripSegmentId:(id)a1 isStartOfNewTripSegment:(BOOL)a2;
- (BOOL)_applyElevationAdjustmentToReconstructedRoute;
- (BOOL)_areRoadTransitionsSame:(id)a0 toRoadTransitions:(id)a1;
- (BOOL)_areRoadsConnected:(id)a0 toRoadTransitions:(id)a1;
- (BOOL)_checkForValidAltitudeSpeedAccuracyDefault;
- (BOOL)_checkIsTripSegmentGenerationEnabled;
- (void)_deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (BOOL)_favorNewerLocationsOverOlderLocationsForTripSegmentUnderConstruction;
- (void)_fetchLocationsCountForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationsForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentMetadataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_getPurgePolicyOverrideDaysToPersistTripSegmentData:(id)a0;
- (void)_purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_sanitizeTripSegmentDatabaseSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)_tripSegmentExistsForDateInterval:(id)a0 ignoreTemporary:(BOOL)a1 handler:(id /* block */)a2;
- (void)_verifyAndReconcileTripSegmentRoadTransitionsArray:(id)a0 startDateOfConstructedTripSegment:(id)a1;
- (void)addLocationsToStore:(id)a0 handler:(id /* block */)a1;
- (void)addTripSegmentData:(id)a0 isEndOfSegment:(BOOL)a1 originLocation:(id)a2 destinationLocation:(id)a3 tripSegSequenceNumber:(int)a4 tripSegSequenceNumberMax:(int)a5 tripCommuteID:(id)a6 handler:(id /* block */)a7;
- (void)addTripSegmentDataWithIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4 locations:(id)a5 roads:(id)a6 isEndOfSegment:(BOOL)a7 originLocation:(id)a8 destinationLocation:(id)a9 tripSegSequenceNumber:(int)a10 tripSegSequenceNumberMax:(int)a11 tripCommuteID:(id)a12 handler:(id /* block */)a13;
- (id)fetchDownsamplingLevelAnnotationForLocations:(id)a0;
- (int)getLocationsCountForTripSegmentWithOptions:(id)a0;
- (id)getLocationsForTripSegment:(id)a0 withCount:(int)a1;
- (id)getPreferredNameForLocation:(id)a0 isStartOfTripSegment:(BOOL)a1;
- (id)getTripSegmentsWithOptions:(id)a0;
- (int)getValueForDaysToKeepTripSegmentLocationData;
- (id)initWithTripSegmentStore:(id)a0 synthesizedLocationStore:(id)a1 defaultsManager:(id)a2 elevationAdjuster:(id)a3 learnedLocationStore:(id)a4 distanceCalculator:(id)a5 geoRoadDataStore:(id)a6 tripSegmentRoadTransitionsStore:(id)a7;
- (BOOL)isOKToAddTripSegmentdata:(id)a0;
- (BOOL)isSpeedValidityCheckingEnabled;
- (BOOL)isValidSynthesizedLocation:(id)a0;
- (void)purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripSegmentsPredating:(id)a0 handler:(id /* block */)a1;
- (BOOL)purgeUsedTripSegmentLocations;
- (void)sanitizeTripSegmentDatabaseSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)tripSegmentExistsForDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)tripSegmentExistsForDateInterval:(id)a0 ignoreTemporary:(BOOL)a1 handler:(id /* block */)a2;

@end
