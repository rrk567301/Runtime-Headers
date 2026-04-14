@class PHObject;

@interface PHGraphQuery : PHQuery

@property (retain) PHObject *graphSubject;
@property long long graphQueryType;

+ (id)_filterSocialGroupsWithFetchResult:(id)a0 option:(id)a1 graphQuery:(id)a2;
+ (id)_graphBasePredicateWithLabelCode:(unsigned int)a0 options:(id)a1;
+ (id)_graphFetchSocialGroupsObjectIDsSortedByDescriptors:(id)a0 library:(id)a1;
+ (id)_nodeTableFromNodeValuesInFetchResult:(id)a0;
+ (id)graphQueryForAssetsForPerson:(id)a0 options:(id)a1;
+ (id)graphQueryForExclusiveAssetsForSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForInclusiveAssetsForSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForKeyAssetForSocialGroup:(id)a0 createIfNeeded:(BOOL)a1 options:(id)a2;
+ (id)graphQueryForPersonsInSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForSocialGroupsWithOptions:(id)a0;
+ (id)queryForSearchEntitiesWithOptions:(id)a0;
+ (id)queryForSocialGroupsWithUUIDs:(id)a0 options:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)executeQuery;
- (BOOL)_graphQueryIntersectsWithChange:(id)a0;
- (id)_graphRefetchSocialGroup;
- (id)changeHandlingContainerIdentifier;
- (id)extraBatchFetchingArrayOptions;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (BOOL)requiresFullRefetchForChange:(id)a0;
- (id)updatedQueryWithChange:(id)a0;

@end
