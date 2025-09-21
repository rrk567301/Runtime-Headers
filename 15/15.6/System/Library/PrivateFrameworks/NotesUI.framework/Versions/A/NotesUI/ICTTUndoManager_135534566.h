@class ICTTTextStorage;

@interface ICTTUndoManager_135534566 : NSUndoManager

@property (weak, nonatomic) ICTTTextStorage *textStorage;

- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)initWithTextStorage:(id)a0;
- (char)_shouldIgnoreUndoRedoBecauseWritingToolsIsActiveWithOpenGroup;

@end
