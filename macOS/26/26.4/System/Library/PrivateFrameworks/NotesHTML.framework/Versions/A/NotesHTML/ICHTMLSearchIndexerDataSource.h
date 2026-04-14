@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;
- (id)dataSourceIdentifier;
- (id)persistentStoreCoordinator;
- (id)addNotesFromSubtree:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (void)contextWillSave:(id)a0;
- (id)newManagedObjectContext;

@end
