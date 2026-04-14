@class MKMultiPartAttributedString, _MKMultiPartLabelMetrics, NSString, NSDictionary, NSTextView, NSFont, NSColor;

@interface MKMultiPartLabel : NSView <MKMultilineText> {
    NSTextView *_textView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
}

@property (retain, nonatomic) _MKMultiPartLabelMetrics *data;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double preferredMaxLayoutWidth;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentCompressionResistancePriority:(float)a0 forOrientation:(long long)a1;
- (void)setContentHuggingPriority:(float)a0 forOrientation:(long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (id)_textAttributes;
- (double)lastBaselineOffsetFromBottom;
- (void)_updateStrings;
- (void)_setupTextView;
- (void)_updateColorsForCurrentState;
- (id)_attributedAdjustedMultiPartStringFromString:(id)a0;
- (void)_updateTextViewTextAndInvalidateLayout:(id)a0;
- (id)_addDefaultAttributesToAttributedString:(id)a0;

@end
