@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;

- (BOOL)collectionHasFixedOrder;

@end
