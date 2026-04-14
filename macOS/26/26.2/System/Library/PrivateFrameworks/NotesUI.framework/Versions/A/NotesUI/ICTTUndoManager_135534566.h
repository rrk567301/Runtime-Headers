@class ICTTTextStorage;

@interface ICTTUndoManager_135534566 : NSUndoManager

@property (weak, nonatomic) ICTTTextStorage *textStorage;

- (void)redo;
- (id)initWithTextStorage:(id)a0;
- (void).cxx_destruct;
- (void)undo;
- (BOOL)_shouldIgnoreUndoRedoBecauseWritingToolsIsActiveWithOpenGroup;

@end
