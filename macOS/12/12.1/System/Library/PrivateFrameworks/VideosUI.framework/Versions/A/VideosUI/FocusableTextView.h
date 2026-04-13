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
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateTextColor;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)vui_baselineOffsetFromBottom;
- (void)vui_traitCollectionDidChange:(id)a0;
- (id)initWithTextLayout:(id)a0;
- (void)setupViews_iOSAndMacOS;
- (id)makeTextView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (void)_selectButtonAction:(id)a0;
- (void)_recomputeTextSizeIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_updateTextColorsIfNeeded;
- (void)layoutSubviews_iOSAndMacOS;
- (void)_setNeedsTextSizeComputation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForAttributedString:(id)a0 withWidth:(double)a1 lines:(unsigned long long)a2;

@end
