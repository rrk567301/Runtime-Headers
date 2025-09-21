@class NSManagedObjectContext, RTMapItemProviderReverseGeocode, RTLocationShifter, RTMapItemProviderLearnedPlaceParameters, NSMutableDictionary, RTRelabelerPersisterMetrics, RTDistanceCalculator, RTRelabelerPersisterParameters, RTRelabelerParameters;

@interface RTRelabelerPersister : NSObject

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLocationShifter *locationShifter;
@property (readonly, nonatomic) RTMapItemProviderReverseGeocode *reverseGeocodeProvider;
@property (readonly, nonatomic) RTMapItemProviderLearnedPlaceParameters *learnedPlaceParameters;
@property (readonly, nonatomic) NSMutableDictionary *loiIdentifierToUnconcreteMap;
@property (readonly, nonatomic) RTRelabelerParameters *relabelerParameters;
@property (readonly, nonatomic) RTRelabelerPersisterParameters *relabelerPersisterParameters;
@property (retain, nonatomic) RTRelabelerPersisterMetrics *metrics;

+ (id)locationFromAggregateVisits:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)saveWithError:(id *)a0;
- (id)learnedPlaceForVisit:(id)a0 creationDate:(id)a1 expirationDate:(id)a2 context:(id)a3 error:(id *)a4;
- (char)associateNonPlaceholderRelabeledInferredMapItem:(id)a0 oldCandidate:(id)a1 error:(id *)a2;
- (char)associatePlaceholderRelabeledInferredMapItem:(id)a0 oldCandidate:(id)a1 error:(id *)a2;
- (char)cleanUpCombinedPairs:(id)a0 context:(id)a1 error:(id *)a2;
- (char)cleanUpWithError:(id *)a0;
- (char)combineEarlierVisitMO:(id)a0 withLaterVisitMO:(id)a1 error:(id *)a2;
- (char)combineOverlappingRevGeoLOIsStabilized:(char *)a0 error:(id *)a1;
- (char)combineSequentialVisitsWithError:(id *)a0;
- (id)connectedComponentForLoiMO:(id)a0 encounteredIdentifiers:(id)a1 error:(id *)a2;
- (char)consolidateVisitsToLoisWithKnownPlaceTypesWithError:(id *)a0;
- (id)dedupableLOIsNearLocation:(id)a0 mapItem:(id)a1 error:(id *)a2;
- (char)dedupeLOIsWithError:(id *)a0;
- (id)fetchClosestUnconcreteLocationOfInterestMOToLocation:(id)a0 withinDistance:(double)a1 distanceCalculator:(id)a2 error:(id *)a3;
- (id)fetchLearnedLocationOfInterestVisitMOForIdentifier:(id)a0 error:(id *)a1;
- (id)fetchLearnedPlaceMOforMapItemIdentifier:(id)a0 error:(id *)a1;
- (id)fetchLocationOfInterestMOforMapItemIdentifier:(id)a0 error:(id *)a1;
- (id)fetchNearbyLocationOfInterestMOsAroundLocation:(id)a0 withinDistance:(double)a1 error:(id *)a2;
- (id)fetchOverlappingUnconcreteLocationOfInterestMOsForLOIMO:(id)a0 distanceCalculator:(id)a1 unusableIdentifiers:(id)a2 error:(id *)a3;
- (id)fetchRevGeoLearnedPlaceInVicinityOfLocation:(id)a0 error:(id *)a1;
- (id)fetchTransitionMOsEndingAtVisitIdentifier:(id)a0 error:(id *)a1;
- (id)fetchTransitionMOsOriginatingFromVisitIdentifier:(id)a0 error:(id *)a1;
- (id)filteredVisitMOs:(id)a0 referenceMapItem:(id)a1 referencePlaceType:(unsigned long long)a2 error:(id *)a3;
- (char)fixUnconcreteLOIs:(id *)a0;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedPlaceParameters:(id)a2 metrics:(id)a3 persistenceManager:(id)a4 relabelerParameters:(id)a5 reverseGeocodeProvider:(id)a6;
- (id)initWithDistanceCalculator:(id)a0 learnedPlaceParameters:(id)a1 locationShifter:(id)a2 metrics:(id)a3 persistenceManager:(id)a4 relabelerParameters:(id)a5 relabelerPersisterParameters:(id)a6 reverseGeocodeProvider:(id)a7;
- (char)iterativelyCollapseOverlappingRevGeoLOIsWithError:(id *)a0;
- (void)logLocalStoreWithReason:(id)a0;
- (id)loiToMoveToFromConnectedComponent:(id)a0;
- (char)moveVisitMOs:(id)a0 toLOIMO:(id)a1 error:(id *)a2;
- (char)performBlock:(id /* block */)a0 error:(id *)a1;
- (char)resnapVisitsWithError:(id *)a0;
- (char)restoreToOldCandidate:(id)a0 error:(id *)a1;
- (char)restoreVisit:(id)a0 transitions:(id)a1 toOldCandidate:(id)a2 error:(id *)a3;
- (id)rollLOIIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (id)rollUUIDGivenUUID:(id)a0;
- (double)scoreLOIMO:(id)a0;
- (double)scoreVisitMO:(id)a0;
- (char)unassociateOldCandidate:(id)a0 error:(id *)a1;
- (char)unconcreteLOIMO:(id)a0;
- (char)untrustedVisitMO:(id)a0;
- (char)useRelabeledInferredMapItem:(id)a0 oldCandidate:(id)a1 associate:(char)a2 error:(id *)a3;
- (char)uuidConflicts:(id)a0 context:(id)a1 error:(id *)a2;

@end
