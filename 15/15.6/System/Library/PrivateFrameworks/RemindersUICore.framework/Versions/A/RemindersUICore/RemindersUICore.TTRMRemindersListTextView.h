@class NSUndoManager;

@interface RemindersUICore.TTRMRemindersListTextView : TTRMTextView_rdar87778381 {
    void /* unknown type, empty encoding */ justBecameFirstResponder;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic) char drawsBackground;
@property (nonatomic) char usesFontPanel;
@property (nonatomic) char supportsAdaptiveImageGlyph;

- (id)initWithCoder:(id)a0;
- (char)becomeFirstResponder;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (id)makeTouchBar;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (id)preferredPasteboardTypeFromArray:(id)a0 restrictedToTypesFromArray:(id)a1;
- (char)resignFirstResponder;
- (id)initWithFrame_rdar87778381:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
