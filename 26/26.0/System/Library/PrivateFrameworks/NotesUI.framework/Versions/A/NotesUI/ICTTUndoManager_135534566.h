@class ICTTTextStorage;

@interface ICTTUndoManager_135534566 : NSUndoManager

@property (weak, nonatomic) ICTTTextStorage *textStorage;

- (id)initWithTextStorage:(id)a0;
- (void)redo;
- (void)undo;
- (void).cxx_destruct;
- (BOOL)_shouldIgnoreUndoRedoBecauseWritingToolsIsActiveWithOpenGroup;

@end
