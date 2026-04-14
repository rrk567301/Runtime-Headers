@interface BRWaitForFPFSMigrationOperation : BROperation

@property (copy) id /* block */ fpfsMigrationCompletion;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)init;
- (void)main;
- (void).cxx_destruct;

@end
