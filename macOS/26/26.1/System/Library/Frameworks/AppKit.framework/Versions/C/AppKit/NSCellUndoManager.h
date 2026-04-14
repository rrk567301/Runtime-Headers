@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (BOOL)canUndo;
- (void)dealloc;
- (BOOL)canRedo;
- (void)redo;
- (void)undo;
- (id)redoMenuItemTitle;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
