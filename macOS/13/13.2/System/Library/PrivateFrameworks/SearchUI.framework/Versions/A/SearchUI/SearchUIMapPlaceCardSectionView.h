@class NSString, SearchUIMapsViewController;

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, MUPlaceViewControllerDelegate>

@property (retain) SearchUIMapsViewController *mapViewController;
@property BOOL alreadyDispatchedOnMainQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)placeViewControllerDidUpdateHeight:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateTintColorProvider;
- (id)embeddedViewController;
- (void)placeViewController:(id)a0 requestPasscodeUnlockWithCompletion:(id /* block */)a1;
- (BOOL)isReportAProblemAvailable;

@end
