@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)managedEntityName;
+ (id)fetchType;

- (BOOL)collectionHasFixedOrder;

@end
