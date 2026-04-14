@class NSHashTable, PXSectionedDataSource, PXSectionedChangeDetailsRepository, NSString, PXUpdater, PXSectionedSelectionManager, PXStoryFeedViewLayoutSpecManager, NSObject, PXSectionedDataSourceManager, PXSelectionSnapshot;
@protocol PXStoryFeedViewLayoutSpec, PXStoryFeedItemLayoutFactory, OS_dispatch_queue, PXStoryFeedViewActionPerformer, PXAnonymousViewController, PXAssetCollectionActionPerformerDelegate;

@interface PXStoryFeedViewModel : PXObservable <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXStoryFeedViewLayoutSpec> spec;
@property (readonly, weak, nonatomic) id<PXStoryFeedViewActionPerformer> actionPerformer;
@property (readonly, weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate;
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (readonly, nonatomic) id<PXStoryFeedItemLayoutFactory> itemLayoutFactory;
@property (readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (void)setPresentingViewController:(id)a0;
- (void)setSpec:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)performChanges:(id /* block */)a0;
- (void)setSelectionSnapshot:(id)a0;
- (void)didPerformChanges;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)setActionPerformer:(id)a0;
- (id)initWithDataSourceManager:(id)a0 specManager:(id)a1 itemLayoutFactory:(id)a2;
- (id)initWithFeedViewConfiguration:(id)a0;
- (void)_updateDataSource;
- (void)_updateSelectionSnapshot;
- (void)_updateSpec;
- (void)_invalidateDataSource;
- (void)_invalidateSelectionSnapshot;
- (void)_invalidateSpec;
- (void)setAssetCollectionActionPerformerDelegate:(id)a0;
- (void)registerAccessoryTapToRadarDiagnosticsProvider:(id)a0;

@end
