@interface PARUsageEventMigration : NSEntityMigrationPolicy

- (id)init;
- (void).cxx_destruct;
- (char)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;

@end
