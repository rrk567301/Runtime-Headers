@interface PHSmartAlbum : PHAssetCollection

+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchType;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)managedEntityName;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;

- (BOOL)collectionHasFixedOrder;

@end
