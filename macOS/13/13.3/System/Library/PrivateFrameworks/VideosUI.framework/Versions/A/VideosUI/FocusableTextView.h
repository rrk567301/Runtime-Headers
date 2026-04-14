@class VUITextView, NSClickGestureRecognizer, VUITextLayout, VUILabel, NSString, NSAttributedString, NSColor;

@interface FocusableTextView : VUIBaseView <VUILabelBaselineProtocol> {
    NSColor *_backgroundColor;
    VUITextView *_auxilliaryTextView;
}

@property (retain, nonatomic) VUITextView *descriptionTextView;
@property (readonly, nonatomic) NSClickGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) BOOL needsTextSizeComputation;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUILabel *computationLabel;
@property (retain, nonatomic) VUILabel *moreLabel;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) NSColor *descriptionTextColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (nonatomic) BOOL moreLabelOnNewLine;
@property (retain, nonatomic) NSColor *moreLabelTextColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)a0;
- (void)_setNeedsTextSizeComputation;
- (void)_updateTextColorsIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForAttributedString:(id)a0 withWidth:(double)a1 lines:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTextLayout:(id)a0;
- (void)layoutSubviews_iOSAndMacOS;
- (id)makeTextView;
- (void)setupViews_iOSAndMacOS;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_traitCollectionDidChange:(id)a0;

@end
