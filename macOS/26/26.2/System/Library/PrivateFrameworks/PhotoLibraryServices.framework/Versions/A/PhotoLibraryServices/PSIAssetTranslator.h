@interface PSIAssetTranslator : NSObject

+ (id)_nameForContributor:(id)a0;
+ (void)_appendPet:(id)a0 fetchHelper:(id)a1 toAsset:(id)a2;
+ (void)_appendAssetTextDataToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendAudioClassificationToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendContributorToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendDateCreatedToAsset:(id)a0 indexingContext:(id)a1 forAsset:(id)a2;
+ (void)_appendExifDataToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendFavoriteToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendFilenameToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendGEODataToAsset:(id)a0 forAsset:(id)a1 countrySynonymProvider:(id)a2;
+ (void)_appendGraphDataToAsset:(id)a0 forMomentFromFetchHelper:(id)a1 hasValidReverseLocationData:(BOOL)a2 indexingContext:(id)a3;
+ (void)_appendHumanActionsToAsset:(id)a0 forAsset:(id)a1 fetchHelper:(id)a2;
+ (void)_appendKeywords:(id)a0 toAsset:(id)a1;
+ (void)_appendLibraryScopeToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendMediaTypesToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendOCRTextForAsset:(id)a0 documentObservation:(id)a1;
+ (void)_appendPerson:(id)a0 fetchHelper:(id)a1 toAsset:(id)a2;
+ (void)_appendPersonsAndPetsToAsset:(id)a0 forAsset:(id)a1 fetchHelper:(id)a2;
+ (void)_appendPrivateEncryptedComputeScenes:(id)a0 forAsset:(id)a1 fetchHelper:(id)a2 csuTaxonomyObjectStore:(id)a3 locale:(id)a4;
+ (void)_appendSavedFromAppToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendSceneClassificationsToAsset:(id)a0 sceneTaxonomyProvider:(id)a1 forAsset:(id)a2 fetchHelper:(id)a3;
+ (void)_appendStickerSuggestionsToAsset:(id)a0 fetchHelper:(id)a1 sceneTaxonomyProvider:(id)a2 forAsset:(id)a3;
+ (void)_appendStyleCastToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendUtilityTypesToAsset:(id)a0 forAsset:(id)a1 indexingContext:(id)a2;
+ (BOOL)_containsPersonWithSceneTaxonomyProvider:(id)a0 forAsset:(id)a1;
+ (id)psiAssetFromAsset:(id)a0 fetchHelper:(id)a1 propertySets:(unsigned long long)a2 indexingContext:(id)a3 documentObservation:(id)a4;
+ (id)psiAssetFromAsset:(id)a0 indexingContext:(id)a1 documentObservation:(id)a2;

@end
