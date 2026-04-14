@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchType;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;

- (BOOL)collectionHasFixedOrder;

@end
