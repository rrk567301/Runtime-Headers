@interface PHSmartAlbum : PHAssetCollection

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;

- (BOOL)collectionHasFixedOrder;

@end
