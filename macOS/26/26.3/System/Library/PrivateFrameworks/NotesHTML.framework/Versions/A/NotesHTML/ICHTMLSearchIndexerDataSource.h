@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)newManagedObjectContext;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (void)contextWillSave:(id)a0;

@end
