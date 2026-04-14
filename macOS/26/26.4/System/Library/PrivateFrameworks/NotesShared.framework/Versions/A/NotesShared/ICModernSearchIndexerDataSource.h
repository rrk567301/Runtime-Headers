@class ICModernSearchIndexProgressDataSource, ICPersistentContainer;

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

@property (weak, nonatomic) ICPersistentContainer *persistentContainer;
@property (retain, nonatomic) ICModernSearchIndexProgressDataSource *progressDataSource;

- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;
- (id)dataSourceIdentifier;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)initWithPersistentContainer:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (void)contextWillSave:(id)a0;
- (id)newManagedObjectContext;
- (id)additionalItemsForObject:(id)a0;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)a0;
- (BOOL)isPaperKitOrSynapseAttachment:(id)a0;
- (id)searchableItemForSynapseContentItem:(id)a0 note:(id)a1 attachment:(id)a2;
- (id)searchableItemResultForObject:(id)a0;
- (id)synapseItemsForObject:(id)a0;

@end
