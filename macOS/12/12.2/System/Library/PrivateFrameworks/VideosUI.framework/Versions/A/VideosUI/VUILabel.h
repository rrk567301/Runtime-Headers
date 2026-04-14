@class NSString, VUITextLayout, NSAttributedString, NSFont;

@interface VUILabel : NSTextField <VUILabelBaselineProtocol> {
    BOOL _selected;
    BOOL _lastSelectedOrHighlighted;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (copy, nonatomic) NSString *labelName;
@property (nonatomic) unsigned long long vuiNumberOfLines;
@property (readonly, nonatomic) double vuiBaselineHeight;
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (readonly, nonatomic) NSFont *vuiFont;
@property (copy, nonatomic) NSString *vuiText;
@property (nonatomic) long long vuiTextAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;
+ (unsigned long long)_numberOfLinesForLayout:(id)a0;
+ (id)labelWithAttributedString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setBordered:(BOOL)a0;
- (void)setEditable:(BOOL)a0;
- (void)setSelectable:(BOOL)a0;
- (void)setBezeled:(BOOL)a0;
- (id)attributedText;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateTextColor;
- (double)baselineHeight;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)vui_baselineOffsetFromBottom;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)a0;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)_updateTextColor:(BOOL)a0;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(void *)a2;
- (BOOL)requiresMoreThanOneLineForTextWidth:(double)a0;
- (void)revertTintColor;
- (id)vuiBackgroundColor;

@end
