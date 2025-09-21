@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (char)canMergeRemoteChanges;
+ (char)shouldHavePhotoLibrary;

- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)setPhotoLibrary:(id)a0;
- (char)isDatabaseCreationContext;

@end
