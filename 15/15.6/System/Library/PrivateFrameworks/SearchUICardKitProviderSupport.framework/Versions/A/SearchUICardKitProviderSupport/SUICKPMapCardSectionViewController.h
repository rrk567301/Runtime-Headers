@class CRKContainerCardSectionView, NSString, NSView;
@protocol CRKCardSectionView;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate> {
    char _needsToLoadCardSectionView;
    char _inTrackingRunLoopMode;
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
- (void)viewDidAppear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(char)a0;
- (void)_updateContentSize;
- (id)_initWithCardSection:(id)a0;
- (void)_loadCardSectionView;
- (id)_mapCardSection;
- (char)_shouldAttemptToSnapshotMapView;
- (void)_loadCardSectionViewIfNeeded;
- (void)_loadMapCardSectionView;
- (void)_snapshotCardSectionView;

@end
