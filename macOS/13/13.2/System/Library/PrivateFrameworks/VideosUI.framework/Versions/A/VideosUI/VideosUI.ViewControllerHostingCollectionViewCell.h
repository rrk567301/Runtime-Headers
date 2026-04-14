@interface VideosUI.ViewControllerHostingCollectionViewCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ hostedViewController;
}

@property (nonatomic) BOOL accessibilityAutoInteractable;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityChildren;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)isAccessibilityAutoInteractable;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
