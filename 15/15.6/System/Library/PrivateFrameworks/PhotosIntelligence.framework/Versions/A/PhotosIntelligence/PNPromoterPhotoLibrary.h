@class PHPhotoLibrary, NSDictionary, NSString;

@interface PNPromoterPhotoLibrary : NSObject <PNPhotoLibraryProtocol>

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSDictionary *rawClusters;
@property (readonly, nonatomic) char includesPets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)pn_fetchMoments;
- (id)initWithPhotoLibrary:(id)a0 rawClusters:(id)a1 includesPets:(char)a2;
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchPersonsWithType:(unsigned long long)a0;
- (id)_defaultFetchOptions;
- (char)pn_performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (id)_defaultAssetFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)a0;
- (float)pn_faceProcessingProgress;
- (id)pn_fetchAssetsForFaceGroup:(id)a0;
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)a0;
- (id)pn_fetchAssetsForPerson:(id)a0;
- (id)pn_fetchAssetsInMoment:(id)a0;
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchCandidatePersonsForPerson:(id)a0;
- (id)pn_fetchFaceGroups;
- (id)pn_fetchFaceGroupsForPerson:(id)a0;
- (id)pn_fetchFacesForFaceGroup:(id)a0;
- (id)pn_fetchFacesForPerson:(id)a0;
- (id)pn_fetchFacesForPerson:(id)a0 inMoment:(id)a1;
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)a0 inMoment:(id)a1;
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pn_fetchFacesWithLocalIdentifiers:(id)a0;
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)a0;
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchMomentsForPerson:(id)a0;
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pn_fetchPersonsInMoment:(id)a0;
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)a0;
- (id)pn_lastAssetDate;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (id)pn_persistentStorageDirectoryURL;

@end
