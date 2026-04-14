@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)dealloc;
- (void)undo;
- (void)redo;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (id)undoMenuItemTitle;
- (id)redoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
