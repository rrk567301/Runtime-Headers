@interface SiriPrivateLearningAnalytics.GroundTruthModelV1toV2CoreDataMigration : NSEntityMigrationPolicy

- (id)init;
- (char)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;

@end
