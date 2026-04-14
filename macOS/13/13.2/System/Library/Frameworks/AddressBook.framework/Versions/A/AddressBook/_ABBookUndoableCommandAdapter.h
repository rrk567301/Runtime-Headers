@protocol ABCommand;

@interface _ABBookUndoableCommandAdapter : ABBookUndoableCommand {
    id<ABCommand> _nonUndoableCommand;
}

- (void).cxx_destruct;
- (void)execute;
- (void)executeUndo;
- (void)executeRedo;
- (id)initWithNonUndoableCommand:(id)a0;

@end
