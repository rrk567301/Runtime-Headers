@class ABLinkPeopleCommand, NSArray, ABMergePeopleCommand, ABMergeAndLinkPeopleActionPlanner, ABAddressBook;
@protocol ABUndoableCommand;

@interface ABMergeAndLinkPeopleCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    ABMergePeopleCommand *_mergeCommand;
    ABLinkPeopleCommand *_linkCommand;
    id<ABUndoableCommand> _privacyCommand;
    ABMergeAndLinkPeopleActionPlanner *_planner;
    BOOL _ignoresGuardianRestrictions;
}

@property (readonly) NSArray *resultingPeople;
@property (readonly) int plannedActions;

- (void)dealloc;
- (void)execute;
- (id)menuTitleForPlannedActions:(int)a0;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (id)initWithPeople:(id)a0 addressBook:(id)a1;
- (id)planner;
- (BOOL)shouldMerge;
- (void)performMerge;
- (void)performLink;
- (void)applyPrivacyFlagsToAllRecords;
- (void)setResultingPeople:(id)a0;
- (void)undoCommands;
- (void)releaseCommands;

@end
