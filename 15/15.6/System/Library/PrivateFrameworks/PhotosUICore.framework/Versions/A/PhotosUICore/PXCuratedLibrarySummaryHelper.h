@class NSString, PXBrowserSummaryController;
@protocol PXLibrarySummaryDataSource, PXDisplayAssetCollection, PXLibrarySummaryOutputPresenter;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {
    char _isPerformingUpdates;
    char _isPerformingChanges;
    struct { char title; char subtitle; char topMostAssetCollection; } _needsUpdateFlags;
    struct { char visibleContentSnapshot; char topMostAssetCollection; char shouldUpdateImmediately; } _dataSourceRespondsTo;
    struct { char setTitle; char setSubtitle; char setAttributedTitle; char defaultAttributes; char emphasizedAttributes; } _outputPresenterRespondsTo;
}

@property (readonly, nonatomic) PXBrowserSummaryController *summaryController;
@property (retain, nonatomic, setter=_setTopMostAssetCollection:) id<PXDisplayAssetCollection> topMostAssetCollection;
@property (weak, nonatomic) id<PXLibrarySummaryDataSource> dataSource;
@property (weak, nonatomic) id<PXLibrarySummaryOutputPresenter> outputPresenter;
@property (nonatomic) char shouldUseAbbreviatedDates;
@property (readonly, nonatomic) char shouldShowImportDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTitle;
- (char)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateSubtitle;
- (void)_invalidateSubtitle;
- (void)_invalidateTitle;
- (void)_invalidateTopMostAssetCollection;
- (void)_performChanges:(id /* block */)a0;
- (void)_updateSubtitleFromSummaryController;
- (void)_updateTitleFromSummaryController;
- (void)_updateTopMostAssetCollection;
- (char)browserSummaryControllerShouldUpdateImmediately:(id)a0;
- (void)visibleContentDidChange;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)a0;

@end
