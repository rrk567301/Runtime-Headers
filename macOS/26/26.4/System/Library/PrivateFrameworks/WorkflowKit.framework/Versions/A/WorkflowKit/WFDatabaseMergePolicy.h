@class WFDatabase;

@interface WFDatabaseMergePolicy : NSMergePolicy

@property (weak, nonatomic) WFDatabase *database;

- (void).cxx_destruct;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
