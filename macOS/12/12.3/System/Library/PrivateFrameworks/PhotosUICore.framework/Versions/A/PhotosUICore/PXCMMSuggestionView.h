@class NSFont, NSString, PXCMMSuggestionViewModel, PXSelectionView, PXCMMPosterHeaderView, UXImageView, UXLabel;
@protocol PXCMMSuggestionViewDelegate;

@interface PXCMMSuggestionView : UXView <PXChangeObserver> {
    PXSelectionView *_selectionView;
    PXCMMPosterHeaderView *_headerView;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
    UXImageView *_combinedFaceTileImageView;
    NSFont *_titleFont;
    NSFont *_titleBoldFont;
}

@property (retain, nonatomic) PXCMMSuggestionViewModel *viewModel;
@property (weak, nonatomic) id<PXCMMSuggestionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_doubleClickGesture:(id)a0;
- (void)_contextClickGesture:(id)a0;
- (void)_updateHeaderView;
- (BOOL)_updateSubtitle;
- (BOOL)_updateCombinedFaceTileImage;
- (void)_updateSelected;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (id)test_title;
- (id)test_subtitle;
- (BOOL)test_selected;

@end
