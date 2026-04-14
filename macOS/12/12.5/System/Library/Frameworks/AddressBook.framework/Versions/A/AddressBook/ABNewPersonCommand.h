@class ABGroup, NSDictionary, ABPerson;

@interface ABNewPersonCommand : ABCommand {
    ABPerson *_newPerson;
    ABGroup *_selectedGroup;
    NSDictionary *_personProperties;
}

- (void).cxx_destruct;
- (void)undoIt;
- (void)redoIt;
- (BOOL)doIt;
- (id)initWithNewPerson:(id)a0 selectedGroup:(id)a1 addressBook:(id)a2;

@end
