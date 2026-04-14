@class ICTTTextStorage;

@interface ICTTUndoManager_135534566 : NSUndoManager

@property (weak, nonatomic) ICTTTextStorage *textStorage;

- (void).cxx_destruct;
- (void)redo;
- (id)initWithTextStorage:(id)a0;
- (void)undo;
- (BOOL)_shouldIgnoreUndoRedoBecauseWritingToolsIsActiveWithOpenGroup;

@end
