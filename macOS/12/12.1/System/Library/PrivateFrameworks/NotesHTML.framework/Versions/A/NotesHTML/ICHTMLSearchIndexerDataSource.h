@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (void)contextWillSave:(id)a0;
- (id)newManagedObjectContext;
- (id)dataSourceIdentifier;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)addNotesFromSubtree:(id)a0;

@end
