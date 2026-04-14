@class PXCMMPosterHeaderViewModel, NSString, PXCMMImageView, PXCMMPosterHeaderViewSpec, PXGradientView, UXImageView, UXLabel;

@interface PXCMMPosterHeaderView : UXView <PXChangeObserver> {
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
    UXLabel *_statusLabel;
    UXImageView *_statusCheckmark;
}

@property (readonly, nonatomic) long long presentationStyle;
@property (retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForWidth:(double)a0 scale:(double)a1;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)_updateTitle;
- (void)_updateFonts;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateStatusString;
- (id)initWithPresentationStyle:(long long)a0;
- (void)_updateSubtitle;
- (id)test_title;
- (id)test_subtitle;
- (void)_performLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)test_statusString;
- (BOOL)test_showStatusCheckmark;

@end
