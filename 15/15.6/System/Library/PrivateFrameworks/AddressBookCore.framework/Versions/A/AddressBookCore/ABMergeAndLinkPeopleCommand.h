@class ABLinkPeopleCommand, NSArray, ABMergePeopleCommand, ABMergeAndLinkPeopleActionPlanner, ABAddressBook;
@protocol ABUndoableCommand;

@interface ABMergeAndLinkPeopleCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    ABMergePeopleCommand *_mergeCommand;
    ABLinkPeopleCommand *_linkCommand;
    id<ABUndoableCommand> _privacyCommand;
    ABMergeAndLinkPeopleActionPlanner *_planner;
    char _ignoresGuardianRestrictions;
}

@property (readonly) NSArray *resultingPeople;
@property (readonly) int plannedActions;

- (void)dealloc;
- (void)execute;
- (id)planner;
- (void)releaseCommands;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)applyPrivacyFlagsToAllRecords;
- (void)executeUndo;
- (char)ignoresGuardianRestrictions;
- (id)initWithPeople:(id)a0 addressBook:(id)a1;
- (id)menuTitleForPlannedActions:(int)a0;
- (void)performLink;
- (void)performMerge;
- (void)setResultingPeople:(id)a0;
- (char)shouldMerge;
- (void)undoCommands;

@end
