@interface PHSmartAlbum : PHAssetCollection

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;

- (BOOL)collectionHasFixedOrder;

@end
