@class NSProgress, NSString;

@interface PLModelMigrationAction_PrepareSharedAssetContainerUpdateWorker : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_insertWorkItemsForAssetObjectIDs:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void)_markEntireLibraryNeedingProcessingWithManagedObjectContext:(id)a0;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
