@interface WFDatabaseMergePolicy : NSMergePolicy

- (char)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
