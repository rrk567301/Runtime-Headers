@class NSString, VUITextLayout, NSAttributedString, NSFont;

@interface VUILabel : NSTextField <VUILabelBaselineProtocol> {
    char _selected;
    char _lastSelectedOrHighlighted;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (nonatomic) char adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (copy, nonatomic) NSString *labelName;
@property (nonatomic) unsigned long long vuiNumberOfLines;
@property (readonly, nonatomic) double vuiBaselineHeight;
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (readonly, nonatomic) NSFont *vuiFont;
@property (copy, nonatomic) NSString *vuiText;
@property (nonatomic) long long vuiTextAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (copy, nonatomic) id /* block */ attributedTextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_numberOfLinesForLayout:(id)a0;
+ (id)labelWithAttributedString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;
+ (id)labelWithString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (void)layout;
- (void)setHighlighted:(char)a0;
- (id)attributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBezeled:(char)a0;
- (void)setBordered:(char)a0;
- (void)setEditable:(char)a0;
- (void)setSelectable:(char)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextColor;
- (void)setSelected:(char)a0 animated:(char)a1;
- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)revertTintColor;
- (id)_adjustedFontToFitWidth:(double)a0 minimumScaleFactor:(double)a1;
- (id)_rangeOfStringExcludingAttachments:(id)a0;
- (void)_updateTextColor:(char)a0;
- (char)_updateTextColorExcludingAttachments:(id)a0;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)a0;
- (char)requiresMoreThanOneLineForTextWidth:(double)a0;
- (void)setVuiBackgroundColor:(id)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (id)vuiBackgroundColor;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;
- (void)vui_setHighlighted:(char)a0;
- (void)vui_setSelected:(char)a0 animated:(char)a1 withAnimationCoordinator:(void *)a2;

@end
