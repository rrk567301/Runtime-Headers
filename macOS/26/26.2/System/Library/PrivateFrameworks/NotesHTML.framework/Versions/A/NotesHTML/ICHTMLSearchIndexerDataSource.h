@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)dataSourceIdentifier;
- (id)persistentStoreCoordinator;
- (void)contextWillSave:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (id)newManagedObjectContext;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;

@end
