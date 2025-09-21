@class NSRuleEditor, NSColor;

@interface NSRuleEditorViewSlice : NSView <NSCoding> {
    NSRuleEditor *_ruleEditor;
    NSColor *_backgroundColor;
    long long _indentation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _animationTargetRect;
    struct { unsigned char selected : 1; unsigned char lastSelected : 1; unsigned char hideNonPartDrawing : 1; unsigned int reserved : 29; } _flags;
    long long _rowIndex;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isLastSelected;
- (id)backgroundColor;
- (void)rightMouseDown:(id)a0;
- (void)setIndentation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_animationTargetRect;
- (id)_curveColorForIndentation:(long long)a0;
- (char)_isSelected;
- (void)_reconfigureSubviews;
- (void)_relayoutSubviewsWidthChanged:(char)a0;
- (void)_setAnimationTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setHideNonPartDrawing:(char)a0;
- (void)_setLastSelected:(char)a0;
- (void)_setSelected:(char)a0;
- (char)containsDisplayValue:(id)a0;
- (long long)indentation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ruleEditorView:(id)a1;
- (void)mouseDown:(id)a0;
- (long long)rowIndex;
- (void)setBackgroundColor:(id)a0;
- (void)setRowIndex:(long long)a0;

@end
