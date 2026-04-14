@interface RemindersUICore.TTRMReminderDetailRootView : NSView {
    void /* unknown type, empty encoding */ overriddenUndoManager;
    void /* unknown type, empty encoding */ hostScreenChangeHandler;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (id)_getUndoManager:(BOOL)a0;

@end
