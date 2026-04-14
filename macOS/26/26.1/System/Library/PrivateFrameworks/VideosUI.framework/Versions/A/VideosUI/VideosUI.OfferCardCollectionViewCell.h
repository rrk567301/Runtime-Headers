@interface VideosUI.OfferCardCollectionViewCell : VUIFloatingCollectionViewCell <VUIRentalExpirationLabelDelegate> {
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ offerView;
    void /* unknown type, empty encoding */ belowCardTextLabel;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
