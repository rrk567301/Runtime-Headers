@class NSString, PHPhotoLibrary;

@interface VCPPhotosPersistenceDelegate : NSObject <PNPersonPromoterDelegate> {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)visibleFacesFetchOptionsWithPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)densityClusteringForObjects:(id)a0 maximumDistance:(double)a1 minimumNumberOfObjects:(unsigned long long)a2 withDistanceBlock:(id /* block */)a3;
- (double)_keyFacePortraitFactorCoefficient;
- (double)_keyFaceSunglassesFactorCoefficient;
- (double)_keyFaceWeightingFactorCoefficient;
- (id)bestRepresentativeFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 candidateFaces:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
- (id)keyFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 updateBlock:(id /* block */)a2;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)a0 forPersons:(id)a1 overTheYearsComputation:(BOOL)a2 updateBlock:(id /* block */)a3;
- (BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2 error:(id *)a3;

@end
