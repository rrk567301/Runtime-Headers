@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (BOOL)canUndo;
- (void)redo;
- (BOOL)canRedo;
- (void)undo;
- (void)dealloc;
- (id)redoMenuItemTitle;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
