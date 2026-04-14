@class NSView, PXScrollViewController, NSString;

@interface PXScrollViewControllerExtendedTraitCollection : PXExtendedTraitCollection <PXScrollViewControllerObserver>

@property (readonly, nonatomic) NSView *underlyingView;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewIfLoaded;
- (id)_initForSubclassWithUserInterfaceFeature:(long long)a0;
- (id)initWithScrollViewController:(id)a0;
- (void)scrollViewControllerContentInsetDidChange:(id)a0;
- (void)scrollViewControllerDidLayoutSubviews:(id)a0;
- (void)scrollViewControllerViewDidMoveToWindow:(id)a0;
- (void)scrollViewControllerViewLayoutMarginsDidChange:(id)a0;
- (void)scrollViewControllerWillLayoutSubviews:(id)a0;
- (void)_beginNSViewKVO;
- (void)_endNSViewKVO;
- (void)_invalidateContentSizeCategoryInChangeBlock;
- (void)_invalidateDisplayScaleInChangeBlock;
- (void)_invalidateLayoutDirectionInChangeBlock;
- (void)_invalidateLayoutSizeClassInChangeBlock;
- (void)_invalidateUserInterfaceIdiomInChangeBlock;
- (void)_invalidateUserInterfaceLevelInChangeBlock;
- (void)_invalidateUserInterfaceStyleInChangeBlock;
- (void)_prepareForObservation;

@end
