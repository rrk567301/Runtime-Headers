@class NSUndoManager;

@interface ABUndoer : NSObject {
    NSUndoManager *_undoManager;
}

- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (void)_performUndoCommand:(id)a0 withName:(id)a1;
- (void)_performRedoCommand:(id)a0 withName:(id)a1;

@end
