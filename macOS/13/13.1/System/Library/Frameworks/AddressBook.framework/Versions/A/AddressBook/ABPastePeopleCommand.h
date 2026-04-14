@class ABGroup, NSMutableArray;

@interface ABPastePeopleCommand : ABCommand {
    NSMutableArray *_people;
    NSMutableArray *_linkedPeople;
    NSMutableArray *_peopleProperties;
    ABGroup *_selectedGroup;
}

- (void).cxx_destruct;
- (BOOL)doIt;
- (void)undoIt;
- (void)redoIt;
- (id)initWithGroup:(id)a0 addressBook:(id)a1;

@end
