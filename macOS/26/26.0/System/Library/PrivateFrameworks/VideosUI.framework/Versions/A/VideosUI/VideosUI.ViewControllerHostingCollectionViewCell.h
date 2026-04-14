@interface VideosUI.ViewControllerHostingCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ hostedViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
}

@property (nonatomic) BOOL accessibilityAutoInteractable;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityAutoInteractable;
- (id)accessibilityChildren;
- (double)visibilityThreshold;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
