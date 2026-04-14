@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)dealloc;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)undo;
- (void)redo;
- (id)undoMenuItemTitle;
- (id)redoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
