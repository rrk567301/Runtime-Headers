@class NSString, NSView, CAShapeLayer, CALayer;

@interface PXSelectionView : NSView <PXSelectionMutableView> {
    double _currentContentViewCornerRadius;
    struct CGSize { double width; double height; } _currentContentViewSize;
    CALayer *_selectionLayer;
    CALayer *_selectionInterspaceLayer;
    CAShapeLayer *_circularSelectionLayer;
}

@property (nonatomic) double px_cornerRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) double interspaceBorderWidth;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL circularSelectionRing;
@property (readonly, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)addSubview:(id)a0;
- (void)viewDidMoveToWindow;
- (void)_windowChangedKeyState;
- (id)initWithContentView:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_performUpdate;
- (void)_updateSelectionBorderColor;
- (void)_resetLayers;

@end
