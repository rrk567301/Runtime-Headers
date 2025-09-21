@interface VideosUI.ViewControllerHostingCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ hostedViewController;
}

@property (nonatomic) char accessibilityAutoInteractable;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (char)isAccessibilityAutoInteractable;
- (id)accessibilityChildren;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (double)visibilityThreshold;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;

@end
