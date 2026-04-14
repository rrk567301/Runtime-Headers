@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
    BOOL ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (void)executeRedo;
- (id)initWithCopyCommand:(id)a0 deleteCommand:(id)a1;
- (BOOL)groupBelongsToGuardianRestrictedContainer;

@end
