@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void).cxx_destruct;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)groupBelongsToGuardianRestrictedContainer;
- (id)initWithCopyCommand:(id)a0 deleteCommand:(id)a1;

@end
