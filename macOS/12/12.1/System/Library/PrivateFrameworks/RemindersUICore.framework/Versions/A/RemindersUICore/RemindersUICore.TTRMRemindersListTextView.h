@class NSUndoManager;

@interface RemindersUICore.TTRMRemindersListTextView : NSTextView {
    void /* unknown type, empty encoding */ justBecameFirstResponder;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL usesFontPanel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)paste:(id)a0;
- (id)makeTouchBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)preferredPasteboardTypeFromArray:(id)a0 restrictedToTypesFromArray:(id)a1;

@end
