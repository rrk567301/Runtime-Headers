@class CPLEnginePushRepository, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage : CPLChangeStorage {
    unsigned long long _storageScopeType;
    CPLEngineScopeStorage *_scopes;
}

@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (char)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (char)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)initWithPushRepository:(id)a0;
- (id)scopedIdentifierAddingScopeIndexForScopedIdentifier:(id)a0;
- (id)storageDescription;

@end
