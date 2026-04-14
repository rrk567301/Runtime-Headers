@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)canMergeRemoteChanges;
+ (BOOL)shouldHavePhotoLibrary;

- (void)setPhotoLibrary:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)isDatabaseCreationContext;
- (void)performBlock:(id /* block */)a0;

@end
