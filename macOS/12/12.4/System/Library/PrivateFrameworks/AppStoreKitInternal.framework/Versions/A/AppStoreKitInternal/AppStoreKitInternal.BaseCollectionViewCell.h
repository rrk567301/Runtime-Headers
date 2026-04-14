@interface AppStoreKitInternal.BaseCollectionViewCell : NSView {
    void /* unknown type, empty encoding */ layoutMargins;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ selectedBackgroundView;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ highlightState;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;

@end
