@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
    BOOL ignoresGuardianRestrictions;
}

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)groupBelongsToGuardianRestrictedContainer;
- (id)initWithCopyCommand:(id)a0 deleteCommand:(id)a1;

@end
