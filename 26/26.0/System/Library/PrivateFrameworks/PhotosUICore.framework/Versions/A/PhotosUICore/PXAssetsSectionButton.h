@protocol NSCopying;

@interface PXAssetsSectionButton : NSView <PXGReusableView> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ button;
}

@property (nonatomic, retain) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clippingRect;

+ (id)configurationWithTitle:(id)a0 numberOfLines:(long long)a1 action:(id /* block */)a2;
+ (double)preferredHeightWithExtendedTraitCollection:(id)a0 numberOfLines:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;
- (void)buttonActionWithSender:(id)a0;

@end
