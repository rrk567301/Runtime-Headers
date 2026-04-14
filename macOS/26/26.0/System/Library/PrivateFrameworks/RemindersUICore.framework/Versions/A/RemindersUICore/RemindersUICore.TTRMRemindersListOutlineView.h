@interface RemindersUICore.TTRMRemindersListOutlineView : NSOutlineView {
    void /* unknown type, empty encoding */ inDrag;
    void /* unknown type, empty encoding */ contentUnavailableView;
}

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (BOOL)_handleScrollWheelSwipeWithEvent:(id)a0;
- (double)_indentationForRow:(long long)a0 withLevel:(long long)a1 isSourceListGroupRow:(BOOL)a2;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOutlineCellAtRow:(long long)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;

@end
