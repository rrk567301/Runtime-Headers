@interface CPLSimpleRecordTargetMapping : CPLRecordTargetMapping

- (void)setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)targetForRecordWithScopedIdentifier:(id)a0;
- (void)enumerateTargetsWithBlock:(id /* block */)a0;
- (BOOL)hasUnknownTargets;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)a0;
- (void)startTrackingUpdates;
- (BOOL)hasUpdatedTargets;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)a0;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargets;

@end
