@class NSUndoManager;

@interface GFInspectorWindow : NSPanel {
    NSUndoManager *_undoManager;
}

- (void)dealloc;
- (BOOL)validateMenuItem:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (void)setUndoManager:(id)a0;
- (id)undoManager;

@end
