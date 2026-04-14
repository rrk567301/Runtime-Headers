@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)dealloc;
- (BOOL)canUndo;
- (void)redo;
- (BOOL)canRedo;
- (void)undo;
- (id)redoMenuItemTitle;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
