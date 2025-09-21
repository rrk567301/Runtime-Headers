@class NSTextField, NSString, SiriUIContentButton, NSView, NSMutableArray, SiriUISnippetViewController;
@protocol NSCollectionViewElement, SiriUIReusableView;

@interface SiriUISnippetControllerCell : NSView <NSCollectionViewElement, SiriUIReusableView> {
    SiriUIContentButton *_snippetPunchOutButton;
    NSTextField *_cancelledLabel;
    NSView<NSCollectionViewElement, SiriUIReusableView> *_headerView;
    NSView<NSCollectionViewElement, SiriUIReusableView> *_footerView;
    NSView<NSCollectionViewElement, SiriUIReusableView> *_transparentHeaderView;
    NSView<NSCollectionViewElement, SiriUIReusableView> *_transparentFooterView;
    NSMutableArray *_allConstraints;
}

@property (nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct NSEdgeInsets { double top; double left; double bottom; double right; } snippetEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;

- (void)updateLayer;
- (void)commonInit;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (double)_heightForTransparentHeaderView;
- (void)_setFooterView:(id)a0;
- (double)_heightForTransparentFooterView;
- (void)_setHeaderView:(id)a0;
- (void)_configureSubviewsForCurrentInset;
- (double)_heightForContent;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (void)_setTransparentFooterView:(id)a0;
- (void)_setTransparentHeaderView:(id)a0;
- (void)_snippetPunchOutButtonTapped:(id)a0;
- (void)animateSnippetCancellationWithCompletion:(id /* block */)a0;
- (void)animateSnippetConfirmationWithCompletion:(id /* block */)a0;

@end
