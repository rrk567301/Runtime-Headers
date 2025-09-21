@interface CPLInvalidBatchStorage : CPLEngineTransientRepositoryBatchStorage

- (char)hasChangesInScopeWithIdentifier:(id)a0;
- (id)initWithTransientRepository:(id)a0 scope:(id)a1;

@end
