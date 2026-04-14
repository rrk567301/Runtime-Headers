@class NSUndoManager;

@interface GFInspectorWindow : NSPanel {
    NSUndoManager *_undoManager;
}

- (id)undoManager;
- (BOOL)validateMenuItem:(id)a0;
- (void)setUndoManager:(id)a0;
- (void)dealloc;
- (void)redo:(id)a0;
- (void)undo:(id)a0;

@end
