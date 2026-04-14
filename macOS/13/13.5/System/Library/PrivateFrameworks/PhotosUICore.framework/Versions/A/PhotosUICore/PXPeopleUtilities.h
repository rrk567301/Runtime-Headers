@interface PXPeopleUtilities : NSObject

+ (id)sharedContactStore;
+ (id)fetchMeContact;
+ (void)mergePersons:(id)a0 withPerson:(id)a1;
+ (id)personWithLocalIdentifier:(id)a0;
+ (id)_daysDictionary;
+ (BOOL)_hasRecentlyHandledBootstrapForPerson:(id)a0;
+ (BOOL)_isPhotosProcess;
+ (void)_peopleFaceTilesForFaces:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (id)_peopleHomeFetchResultForPersonType:(long long)a0;
+ (void)_setDaysDictionary:(id)a0;
+ (id)_titleStringForPeople:(id)a0 singlePersonFallback:(id)a1 groupFallback:(id)a2;
+ (id)assetCollectionListFetchResultForPerson:(id)a0;
+ (id /* block */)comparatorByPeopleHomeSortingType:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectForPeopleFaceTile:(id)a0;
+ (id)facesForPerson:(id)a0 inAssets:(id)a1;
+ (id)finalMergeTargetPersonForPersonWithUUID:(id)a0;
+ (id)generateNewFaceTileFromFaceTile:(id)a0;
+ (id)identifiersForPeople:(id)a0;
+ (BOOL)isFavoritePerson:(id)a0;
+ (BOOL)isGreenTeaAndContactsAccessDenied;
+ (BOOL)isPersonHiddenFromPeopleHome:(id)a0;
+ (id)keyFaceForPerson:(id)a0;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)a0;
+ (void)markHandledBootstrapForPerson:(id)a0;
+ (id)memoryTitleStringFromPeople:(id)a0;
+ (void)peopleFaceTilesForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)peopleFaceTilesForFaces:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (id)peopleWithPersonUris:(id)a0;
+ (id)personFaceTileByPersonIdForPersons:(id)a0;
+ (id)personWithLocalIdentifier:(id)a0 propertySets:(id)a1;
+ (id)personWithPersonUri:(id)a0;
+ (BOOL)shouldShowBootstrapForPerson:(id)a0;
+ (BOOL)shouldShowBootstrapForPerson:(id)a0 context:(id)a1;
+ (id)slideshowTitleStringForPeople:(id)a0;
+ (id)sortDescriptorsForManualSort;
+ (id)sortedPersons:(id)a0 byPersonMemoryFeatures:(id)a1;
+ (id)titleStringForPeople:(id)a0;
+ (void)unblockPersonsInLibrary:(id)a0 completion:(id /* block */)a1;

@end
