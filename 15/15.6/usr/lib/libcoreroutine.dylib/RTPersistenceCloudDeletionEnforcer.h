@interface RTPersistenceCloudDeletionEnforcer : NSObject

- (char)applyTombstonesToEntityWithName:(id)a0 identifiers:(id)a1 context:(id)a2 error:(id *)a3;
- (char)performBatchDeleteOfEntityWithName:(id)a0 identifiers:(id)a1 context:(id)a2 error:(id *)a3;
- (char)processRequestsSinceReferenceDate:(id)a0 context:(id)a1 error:(id *)a2;

@end
