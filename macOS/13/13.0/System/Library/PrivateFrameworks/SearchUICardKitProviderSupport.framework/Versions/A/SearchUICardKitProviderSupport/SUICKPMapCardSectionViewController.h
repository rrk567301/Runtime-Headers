@class CRKContainerCardSectionView, NSString, NSView;
@protocol CRKCardSectionView;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate> {
    BOOL _needsToLoadCardSectionView;
    BOOL _inTrackingRunLoopMode;
    NSView<CRKCardSectionView> *_mapSectionView;
    struct __CFRunLoopObserver { } *_mainRunLoopObserverRef;
}

@property (retain, nonatomic) CRKContainerCardSectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didEngageCardSection:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)_mapCardSection;
- (void)_updateContentSize;
- (id)_initWithCardSection:(id)a0;
- (void)_loadCardSectionView;
- (void)_snapshotCardSectionView;
- (void)_loadMapCardSectionView;
- (void)_loadCardSectionViewIfNeeded;
- (BOOL)_shouldAttemptToSnapshotMapView;

@end
