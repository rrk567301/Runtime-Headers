@interface TransparencyMergePolicy : NSMergePolicy

- (id)init;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (void)updateTreeHead:(id)a0 withConflictingHead:(id)a1;

@end
