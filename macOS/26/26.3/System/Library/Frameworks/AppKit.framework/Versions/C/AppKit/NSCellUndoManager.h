@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)redo;
- (void)undo;
- (void)dealloc;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (id)redoMenuItemTitle;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end
