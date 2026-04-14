@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)redo;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)undo;
- (void)dealloc;
- (id)redoMenuItemTitle;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
