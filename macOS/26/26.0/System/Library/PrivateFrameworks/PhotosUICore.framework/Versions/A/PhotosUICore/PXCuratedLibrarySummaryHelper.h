@class NSString, PXBrowserSummaryController;
@protocol PXLibrarySummaryDataSource, PXDisplayAssetCollection, PXLibrarySummaryOutputPresenter;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    struct { BOOL headlineOutput; BOOL primaryTitleOutput; BOOL secondaryTitleOutput; BOOL topMostAssetCollection; } _needsUpdateFlags;
    struct { BOOL visibleContentSnapshot; BOOL topMostAssetCollection; BOOL shouldUpdateImmediately; } _dataSourceRespondsTo;
    struct { BOOL setTitle; BOOL setSubtitle; BOOL setAttributedTitle; BOOL defaultAttributes; BOOL emphasizedAttributes; } _outputPresenterRespondsTo;
}

@property (readonly, nonatomic) PXBrowserSummaryController *summaryController;
@property (retain, nonatomic, setter=_setTopMostAssetCollection:) id<PXDisplayAssetCollection> topMostAssetCollection;
@property (weak, nonatomic) id<PXLibrarySummaryDataSource> dataSource;
@property (weak, nonatomic) id<PXLibrarySummaryOutputPresenter> outputPresenter;
@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *selectionTitle;
@property (nonatomic) BOOL shouldUseAbbreviatedDates;
@property (readonly, nonatomic) BOOL shouldShowImportDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_invalidateSecondaryTitleOutput;
- (void)_invalidateHeadlineOutput;
- (void)_invalidatePrimaryTitleOutput;
- (void)_invalidateTopMostAssetCollection;
- (void)_setOutputSubtitle:(id)a0;
- (void)_updateHeadlineOutput;
- (void)_updatePrimaryTitleOutput;
- (void)_updatePrimaryTitleOutputFromSummaryController;
- (void)_updateSecondaryTitleOutput;
- (void)_updateSecondaryTitleOutputFromSummaryController;
- (void)_updateTopMostAssetCollection;
- (BOOL)browserSummaryControllerShouldUpdateImmediately:(id)a0;
- (void)visibleContentDidChange;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)a0;

@end
