@class NSString, CPLEngineScope, CPLRecordTargetMapping, CPLEngineTransientRepository;

@interface CPLEngineTransientRepositoryBatchStorage : NSObject <CPLBatchExtractionStrategyStorage>

@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository;
@property (readonly, nonatomic) CPLEngineScope *scope;
@property (readonly, nonatomic) CPLRecordTargetMapping *targetMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)allChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 changeType:(unsigned long long)a2;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 trashed:(char)a2;
- (id)allChangesWithClass:(Class)a0 secondaryScopedIdentifier:(id)a1;
- (id)allChangesWithScopeIdentifier:(id)a0;
- (id)allNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (void)beginExtractingBatch;
- (id)changeWithScopedIdentifier:(id)a0;
- (void)cleanupAfterExtractingBatch;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)a0;
- (char)hasChangesInScopeWithIdentifier:(id)a0;
- (id)initWithTransientRepository:(id)a0 scope:(id)a1;
- (char)isRecordWithScopedIdentifierStashed:(id)a0;
- (char)removeChange:(id)a0 error:(id *)a1;
- (char)stashChange:(id)a0 error:(id *)a1;

@end
