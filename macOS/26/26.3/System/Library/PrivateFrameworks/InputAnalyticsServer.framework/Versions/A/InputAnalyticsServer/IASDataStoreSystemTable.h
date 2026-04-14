@interface IASDataStoreSystemTable : IASDataStoreDurableTable

+ (id)sharedInstance;

- (id)getInfrastructureVersionForTable:(id)a0;
- (id)getVersionForTable:(id)a0;
- (BOOL)setInfrastructureVersionForTable:(id)a0;
- (BOOL)setVersionForTable:(id)a0;

@end
