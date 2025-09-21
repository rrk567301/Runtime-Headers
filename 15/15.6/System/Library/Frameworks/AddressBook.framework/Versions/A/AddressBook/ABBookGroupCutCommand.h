@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
    char ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)executeRedo;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (char)groupBelongsToGuardianRestrictedContainer;
- (id)initWithCopyCommand:(id)a0 deleteCommand:(id)a1;

@end
