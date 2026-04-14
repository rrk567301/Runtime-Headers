@protocol ABCommand;

@interface _ABBookUndoableCommandAdapter : ABBookUndoableCommand {
    id<ABCommand> _nonUndoableCommand;
}

- (void)execute;
- (void).cxx_destruct;
- (void)executeRedo;
- (void)executeUndo;
- (id)initWithNonUndoableCommand:(id)a0;

@end
