@class WFDatabase;

@interface WFDatabaseMergePolicy : NSMergePolicy

@property (weak, nonatomic) WFDatabase *database;

- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
