@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)shouldHavePhotoLibrary;
+ (BOOL)canMergeRemoteChanges;

- (void)performBlockAndWait:(id /* block */)a0;
- (void)setPhotoLibrary:(id)a0;
- (BOOL)isDatabaseCreationContext;
- (void)performBlock:(id /* block */)a0;

@end
