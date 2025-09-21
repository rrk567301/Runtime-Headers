@interface RemindersUICore.TTRMReminderDetailView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isReceivingDrag;
}

@property (nonatomic, readonly) char acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_getUndoManager:(char)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;

@end
