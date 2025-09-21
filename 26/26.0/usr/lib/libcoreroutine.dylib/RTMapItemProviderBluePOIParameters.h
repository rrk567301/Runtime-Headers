@class NSString, RTPOIHarvestParameters, NSSet;

@interface RTMapItemProviderBluePOIParameters : NSObject

@property (readonly, nonatomic) double baseDuration;
@property (readonly, nonatomic) NSString *injectedPlistPath;
@property (readonly, nonatomic) double aoiDistanceThreshold;
@property (readonly, nonatomic) double poiDistanceThreshold;
@property (readonly, nonatomic) double aoiConfidencePassThroughThreshold;
@property (readonly, nonatomic) double aoiConfidenceConsiderThreshold;
@property (readonly, nonatomic) double poiConfidencePassThroughThreshold;
@property (readonly, nonatomic) double poiConfidenceConsiderThreshold;
@property (readonly, nonatomic) unsigned long long maxNumberOfQueries;
@property (readonly, nonatomic) BOOL earlyStop;
@property (readonly, nonatomic) double noFingerprintMinVisitDuration;
@property (readonly, nonatomic) double minVisitLength;
@property (readonly, nonatomic) double tileSize;
@property (readonly, nonatomic) BOOL performServerWithLocal;
@property (readonly, nonatomic) RTPOIHarvestParameters *harvestParameters;
@property (readonly, nonatomic) NSSet *aoiCategoriesToSuppressContainingPOIs;

- (id)init;
- (id)initWithBaseDuration:(double)a0 injectedPlistPath:(id)a1 aoiDistanceThreshold:(double)a2 poiDistanceThreshold:(double)a3 aoiConfidencePassThroughThreshold:(double)a4 aoiConfidenceConsiderThreshold:(double)a5 poiConfidencePassThroughThreshold:(double)a6 poiConfidenceConsiderThreshold:(double)a7 maxNumberOfQueries:(unsigned long long)a8 earlyStop:(BOOL)a9 noFingerprintMinVisitDuration:(double)a10 minVisitLength:(double)a11 tileSize:(double)a12 performServerWithLocal:(BOOL)a13 harvestParameters:(id)a14 aoiCategoriesToSuppressContainingPOIs:(id)a15;
- (id)description;
- (id)initWithBaseDuration:(double)a0 injectedPlistPath:(id)a1 locationLookupWindowMaxMinutes:(double)a2 locationLookupWindowMinMinutes:(double)a3 maxLocationsPerFingerprint:(unsigned long long)a4 locationUncertaintyThreshold:(double)a5 aoiDistanceThreshold:(double)a6 poiDistanceThreshold:(double)a7 harvestMask:(unsigned long long)a8 aoiConfidencePassThroughThreshold:(double)a9 aoiConfidenceConsiderThreshold:(double)a10 poiConfidencePassThroughThreshold:(double)a11 poiConfidenceConsiderThreshold:(double)a12 maxNumberOfQueries:(unsigned long long)a13 earlyStop:(BOOL)a14 noFingerprintMinVisitDuration:(double)a15 minVisitLength:(double)a16 tileSize:(double)a17 performServerWithLocal:(BOOL)a18;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;

@end
