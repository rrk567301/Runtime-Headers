@class NSView;

@interface NCCustomAlertBackgroundView : NSView {
    NSView *_materialView;
    NSView *_contentView;
}

@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } shadowInset;
@property (nonatomic) BOOL dark;
@property (readonly) NSView *contentView;

+ (id)createCardView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)effectiveAppearance;
- (id)createMaterialView;

@end
