@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (void)contextWillSave:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;
- (id)newManagedObjectContext;
- (id)dataSourceIdentifier;

@end
