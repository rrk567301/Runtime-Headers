@interface PHSearchQueryDisambiguation : NSObject

+ (id)_performDisambiguationForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 maxNumberOfResults:(unsigned long long)a3 matchOptions:(unsigned long long)a4 photoLibrary:(id)a5;
+ (id)_performDisambiguationForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 maxNumberOfResults:(unsigned long long)a3 matchOptions:(unsigned long long)a4 photosEntityStore:(id)a5;
+ (id)_performDisambiguationForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 photosEntityStore:(id)a3;
+ (id)_personLookupIdentifiersForPersonNames:(id)a0 photosEntityStore:(id)a1 photoLibrary:(id)a2;
+ (id)allowedSearchIndexCategoriesForMemoriesLocationPromptBinding;
+ (id)performDisambiguationForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 photoLibrary:(id)a3;
+ (id)performDisambiguationForPersonName:(id)a0 expansionStringValuesByCSAttributedEntityType:(id)a1 photoLibrary:(id)a2;
+ (id)performLocationDisambiguationForFullQueryString:(id)a0 allowedSearchIndexCategories:(id)a1 maxNumberOfResults:(unsigned long long)a2 photoLibrary:(id)a3;

@end
