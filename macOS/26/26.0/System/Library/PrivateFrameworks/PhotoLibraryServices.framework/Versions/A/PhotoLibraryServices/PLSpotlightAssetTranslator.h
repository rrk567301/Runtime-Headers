@interface PLSpotlightAssetTranslator : NSObject

+ (id)_partsOfDayForAsset:(id)a0;
+ (id)_jsonRepresentationForScenesFromAsset:(id)a0 fetchHelper:(id)a1 indexingContext:(id)a2 isSensitiveLocation:(out BOOL *)a3 thumbnailMap:(id)a4;
+ (id)_spotlightSearchableAttributesForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 indexingContext:(id)a3 documentObservation:(id)a4 propertySets:(unsigned long long)a5 embeddingsFetcher:(id)a6;
+ (id)_personsForAsset:(id)a0 fetchHelper:(id)a1 thumbnailMap:(id)a2;
+ (id)_humanActionScenesForAsset:(id)a0 fetchHelper:(id)a1 thumbnailMap:(id)a2;
+ (id)_highlightUUIDsForAsset:(id)a0 libraryIdentifier:(long long)a1 assetCounts:(out id *)a2;
+ (id)jsonRepresentationKeys;
+ (BOOL)_indexLocalDateCreated;
+ (id)_memoryUUIDsForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 assetCounts:(out id *)a3;
+ (id)_nameForContributor:(id)a0;
+ (id)_jsonRepresentationForCSPersons:(id)a0;
+ (id)_sharedLibraryContributorsForAsset:(id)a0;
+ (id)_utilityTypesForAsset:(id)a0 indexingContext:(id)a1;
+ (id)_audioClassificationsForAsset:(id)a0;
+ (id)_partsOfWeekForAsset:(id)a0;
+ (id)_privateEncryptedComputeScenesForAsset:(id)a0 fetchHelper:(id)a1 csuTaxonomyObjectStore:(id)a2 locale:(id)a3 isSensitiveLocation:(out BOOL *)a4;
+ (id)_scenesForAsset:(id)a0 fetchHelper:(id)a1 sceneTaxonomyProvider:(id)a2 thumbnailMap:(id)a3;
+ (void)updateThumbnailMap:(id)a0 withMADEmbedding:(id)a1;
+ (id)_libraryScopeForAsset:(id)a0;
+ (id)partialSpotlightSearchableItemFromAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 propertySets:(unsigned long long)a3 indexingContext:(id)a4 documentObservation:(id)a5 embeddingsFetcher:(id)a6;
+ (id)_albumsUUIDsForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 assetCounts:(out id *)a3;
+ (id)_adjustmentStyleCastForAsset:(id)a0;
+ (void)_getGraphAttributesForMomentFromFetchHelper:(id)a0 indexingContext:(id)a1 businessNames:(out id *)a2 businessCategories:(out id *)a3 eventNames:(out id *)a4 eventCategories:(out id *)a5 eventPerformers:(out id *)a6 meanings:(out id *)a7 holidays:(out id *)a8 locationKeywords:(out id *)a9;
+ (id)_revGeoLocationNamesForAsset:(id)a0 countrySynonymProvider:(id)a1;
+ (id)_locationNamesForAsset:(id)a0 graphLocations:(id)a1 countrySynonymProvider:(id)a2;
+ (id)_mediaTypesForAsset:(id)a0;
+ (id)_contentRatingForAsset:(id)a0 fetchHelper:(id)a1;
+ (id)jsonDictionaryFromAsset:(id)a0 libraryIdentifier:(long long)a1 indexingContext:(id)a2 includeEmbeddingData:(BOOL)a3 redacted:(BOOL)a4;

@end
