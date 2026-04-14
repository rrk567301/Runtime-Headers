@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store;

- (id)initWithStore:(id)a0;
- (id)storageDescription;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void).cxx_destruct;

@end
