@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (void)contextWillSave:(id)a0;
- (id)newManagedObjectContext;
- (id)dataSourceIdentifier;
- (id)searchableItemResultForObject:(id)a0;
- (id)additionalItemsForObject:(id)a0;
- (id)synapseItemsForObject:(id)a0;
- (id)searchableItemForSynapseContentItem:(id)a0 note:(id)a1 attachment:(id)a2;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (BOOL)isPaperKitOrSynapseAttachment:(id)a0;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)addNotesFromSubtree:(id)a0;

@end
