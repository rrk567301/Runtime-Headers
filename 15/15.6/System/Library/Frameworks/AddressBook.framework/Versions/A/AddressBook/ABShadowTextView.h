@interface ABShadowTextView : NSTextView {
    char _overrideAllowsSelection;
}

@property (nonatomic) char allowsOnlyPastedInput;

- (char)drawsBackground;
- (char)autoscroll:(id)a0;
- (void)insertNewline:(id)a0;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)resignFirstResponder;
- (char)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 granularity:(unsigned long long)a1;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(unsigned long long)a1 stillSelecting:(char)a2;
- (char)shouldDrawInsertionPoint;
- (id)textField;
- (void)unmarkText;
- (void)forcedSelectAll;
- (void)abShadowTextInsertNewline:(id)a0;
- (char)allowsMultipleLines;
- (void)insertPastedText:(id)a0;
- (void)markedTextDidChange;
- (char)needsCardViewBorderDrawing;
- (void)resumeAllowingSelection;

@end
