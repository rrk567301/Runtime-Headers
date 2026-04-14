@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;
- (unsigned long long)indexingPriority;
- (void)contextWillSave:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)newManagedObjectContext;
- (id)addNotesFromSubtree:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;

@end
