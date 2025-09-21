@interface NSEntityMigrationPolicy : NSObject

- (char)endEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (id)_nonNilValueOrDefaultValueForAttribute:(id)a0 source:(id)a1 destination:(id)a2;
- (char)beginEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (char)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (char)createRelationshipsForDestinationInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (char)endInstanceCreationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (char)endRelationshipCreationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;
- (char)performCustomValidationForEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;

@end
