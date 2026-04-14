@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)shouldHavePhotoLibrary;
+ (BOOL)canMergeRemoteChanges;

- (void)performBlock:(id /* block */)a0;
- (void)setPhotoLibrary:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)isDatabaseCreationContext;

@end
