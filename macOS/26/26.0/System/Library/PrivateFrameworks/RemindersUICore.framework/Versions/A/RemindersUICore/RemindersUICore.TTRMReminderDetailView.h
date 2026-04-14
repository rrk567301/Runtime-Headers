@interface RemindersUICore.TTRMReminderDetailView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isReceivingDrag;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_getUndoManager:(BOOL)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;

@end
