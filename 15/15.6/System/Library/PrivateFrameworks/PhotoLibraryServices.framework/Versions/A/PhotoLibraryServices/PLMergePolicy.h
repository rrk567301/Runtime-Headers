@interface PLMergePolicy : NSMergePolicy

@property (readonly, nonatomic) char isResolvingConflicts;

- (char)resolveConflicts:(id)a0 error:(id *)a1;
- (char)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
