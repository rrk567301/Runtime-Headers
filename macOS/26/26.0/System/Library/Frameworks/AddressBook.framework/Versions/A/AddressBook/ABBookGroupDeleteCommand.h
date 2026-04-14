@class NSString, NSDictionary, ABRecordContext, ABGroupEntriesList;

@interface ABBookGroupDeleteCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    NSString *_groupUid;
    Class _groupClass;
    ABGroupEntriesList *_groupEntriesList;
    int _containmentPersonality;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSDictionary *undoState;

- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (id)group;
- (void).cxx_destruct;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)actionName;
- (void)executeUndo;
- (id)initWithRecordContext:(id)a0 group:(id)a1 groupEntriesList:(id)a2;

@end
