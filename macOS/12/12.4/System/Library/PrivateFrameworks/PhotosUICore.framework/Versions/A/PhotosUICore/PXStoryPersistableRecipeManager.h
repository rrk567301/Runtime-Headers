@class NSError, NSString, PXStoryRecipeManager, PXUpdater, PXStoryResourcesDataSourceManager, PXStoryRecipeAssetEdits, PXStoryStyleManager, NSObject, PXStoryModel, NSProgress;
@protocol PXStoryErrorReporter, OS_dispatch_queue, PFStoryRecipe;

@interface PXStoryPersistableRecipeManager : PXObservable <PXChangeObserver, PXStoryQueueParticipant>

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager;
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (readonly, nonatomic) PXStoryStyleManager *styleManager;
@property (retain, nonatomic) id<PFStoryRecipe> persistableRecipe;
@property (retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits;
@property (nonatomic) BOOL isOriginalPersistableRecipeValid;
@property (retain, nonatomic) id<PFStoryRecipe> originalPersistableRecipe;
@property (nonatomic) BOOL hasUserExperiencedPlayback;
@property (nonatomic) BOOL hasUserExperiencedFirstPlaybackEver;
@property (nonatomic) BOOL hasAnyUserChange;
@property (nonatomic) long long persistencePermission;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) BOOL isReadyToProducePersistableRecipe;
@property (readonly, nonatomic) BOOL isProducingPersistableRecipe;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldPassthroughCurrentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

+ (BOOL)_addCurationChangeList:(id)a0 toPersistableRecipe:(id)a1 originalPersistableRecipe:(id)a2 availableAssets:(id)a3 userCuration:(BOOL)a4 error:(id *)a5;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)_updatePersistableRecipe;
- (void)_invalidatePersistableRecipe;
- (id)initWithModel:(id)a0 styleManager:(id)a1 shouldPassthroughCurrentStyle:(BOOL)a2;
- (id)initWithModel:(id)a0 styleManager:(id)a1;
- (void)_updateOriginalPersistableRecipe;
- (void)_updateIsReadyToProducePersistableRecipe;
- (void)_updateHasUserExperiencedPlayback;
- (void)_updateHasUserExperiencedFirstPlaybackEver;
- (void)_updatePersistencePermission;
- (void)_invalidateOriginalPersistableRecipe;
- (void)_invalidateIsReadyToProducePersistableRecipe;
- (void)_invalidateHasUserExperiencedPlayback;
- (void)_invalidatePersistencePermission;
- (void)_invalidateHasUserExperiencedFirstPlaybackEver;
- (void)setIsProducingPersistableRecipe:(BOOL)a0;
- (void)setIsReadyToProducePersistableRecipe:(BOOL)a0;
- (id)_persistableRecipeWithOriginalPersistableRecipe:(id)a0 recipe:(id)a1 recipeAssetEdits:(id)a2 currentStyle:(id)a3 error:(id *)a4;
- (void)_handlePersistableRecipe:(id)a0 recipeAssetEdits:(id)a1 error:(id)a2 progress:(id)a3;

@end
