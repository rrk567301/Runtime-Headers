@class NSColor, NSString, NSView, TLKLabel, NSAttributedString, NSFont;

@interface SearchUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate> {
    NSView *_maskView;
}

@property (retain) NSView *gradientView;
@property double completionStringOffset;
@property (retain) NSView *fillerView;
@property (readonly, nonatomic) TLKLabel *completionLabel;
@property (readonly, nonatomic) TLKLabel *bridgeLabel;
@property (readonly, nonatomic) TLKLabel *extensionLabel;
@property (readonly, nonatomic) NSView *extensionLabelBackgroundView;
@property (retain, nonatomic) NSAttributedString *typedString;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *completionFillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (BOOL)isFlipped;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (id)maskView;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)setMaskView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)layoutMasksAndLabels;
- (void)resetStringOffset;

@end
