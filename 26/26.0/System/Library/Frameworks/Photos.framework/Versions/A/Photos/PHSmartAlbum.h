@interface PHSmartAlbum : PHAssetCollection

+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;

- (BOOL)collectionHasFixedOrder;

@end
