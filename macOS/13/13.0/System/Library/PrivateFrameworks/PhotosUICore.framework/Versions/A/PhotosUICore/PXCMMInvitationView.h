@class PXCMMInvitationViewModel, NSString, PXSelectionView, PXCMMPosterHeaderView, UXLabel, NSFont, NSColor;
@protocol PXCMMInvitationViewDelegate;

@interface PXCMMInvitationView : UXView <PXChangeObserver> {
    PXSelectionView *_selectionView;
    PXCMMPosterHeaderView *_headerView;
    UXLabel *_titleLabel;
    UXLabel *_subtitle1Label;
    UXLabel *_subtitle2Label;
}

@property (class, readonly) NSFont *titleFont;
@property (class, readonly) NSFont *titleEmphasizedFont;
@property (class, readonly) NSFont *subtitle1Font;
@property (class, readonly) NSFont *subtitle2Font;
@property (class, readonly) long long titleTextStyle;
@property (class, readonly) long long subtitle1TextStyle;
@property (class, readonly) long long subtitle2TextStyle;
@property (class, readonly) NSColor *titleBulletColor;
@property (class, readonly) NSColor *subtitle1Color;
@property (class, readonly) NSColor *subtitle2Color;

@property (retain, nonatomic) PXCMMInvitationViewModel *viewModel;
@property (weak, nonatomic) id<PXCMMInvitationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_updateTitle;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_doubleClickGesture:(id)a0;
- (void)_contextClickGesture:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)_updateHeaderView;
- (void)_updateSelected;
- (id)test_title;
- (BOOL)test_selected;
- (BOOL)_updateSubtitle1;
- (BOOL)_updateSubtitle2;
- (id)test_subtitle1;
- (id)test_subtitle2;

@end
