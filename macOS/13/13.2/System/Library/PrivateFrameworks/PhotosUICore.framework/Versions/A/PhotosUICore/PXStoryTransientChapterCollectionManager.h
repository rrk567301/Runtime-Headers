@class PXUpdater, NSArray;
@protocol PXStoryChapterCollection, PXStoryTransientChapterCollectionManagerPersistenceDelegate;

@interface PXStoryTransientChapterCollectionManager : PXStoryChapterCollectionManager <PXStoryMutableTransientChapterCollectionManager>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSArray *edits;
@property (readonly, nonatomic) id<PXStoryChapterCollection> uneditedChapterCollection;
@property (weak, nonatomic) id<PXStoryTransientChapterCollectionManagerPersistenceDelegate> persistenceDelegate;

- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (id)initWithChapterCollection:(id)a0;
- (BOOL)applyEditTransaction:(id)a0 error:(id *)a1;
- (void)_updateChapterCollection;
- (void)_invalidateChapterCollection;
- (void)setUneditedChapterCollection:(id)a0;
- (id)initWithUneditedChapterCollection:(id)a0;
- (BOOL)_validateEditTransaction:(id)a0 error:(id *)a1;
- (void)setEdits:(id)a0;

@end
