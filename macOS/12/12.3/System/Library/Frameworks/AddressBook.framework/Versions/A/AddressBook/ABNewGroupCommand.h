@class ABGroup, NSDictionary, NSArray;

@interface ABNewGroupCommand : ABCommand {
    ABGroup *_newGroup;
    NSDictionary *_groupProperties;
    NSArray *_selectedRecords;
    ABGroup *_parentGroup;
}

- (void).cxx_destruct;
- (void)undoIt;
- (void)redoIt;
- (BOOL)doIt;
- (id)initWithPeople:(id)a0 parentGroup:(id)a1 addressBook:(id)a2;
- (id)newGroup;

@end
