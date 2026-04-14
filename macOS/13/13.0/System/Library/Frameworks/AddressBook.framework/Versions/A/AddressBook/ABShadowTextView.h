@interface ABShadowTextView : NSTextView {
    BOOL _overrideAllowsSelection;
}

- (BOOL)resignFirstResponder;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsBackground;
- (void)paste:(id)a0;
- (BOOL)autoscroll:(id)a0;
- (void)insertNewline:(id)a0;
- (void)unmarkText;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)textField;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (BOOL)shouldDrawInsertionPoint;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 granularity:(unsigned long long)a1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (BOOL)needsCardViewBorderDrawing;
- (BOOL)allowsMultipleLines;
- (void)resumeAllowingSelection;
- (void)forcedSelectAll;
- (void)abShadowTextInsertNewline:(id)a0;
- (void)insertPastedText:(id)a0;
- (void)markedTextDidChange;

@end
