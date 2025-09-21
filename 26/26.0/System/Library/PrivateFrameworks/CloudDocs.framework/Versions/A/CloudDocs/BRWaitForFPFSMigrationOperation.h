@interface BRWaitForFPFSMigrationOperation : BROperation

@property (copy) id /* block */ fpfsMigrationCompletion;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
