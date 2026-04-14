@class NSProgress, NSString;

@interface PLModelMigrationAction_RemoveVisionComputeResources : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (id)recipeIDs;
- (long long)_removeComputedResourcesFromAssetOIDs:(id)a0 pendingParentUnitCount:(long long)a1 managedObjectContext:(id)a2;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
