@class ABAccount, NSArray, NSUndoManager, ABPersonListController, NSManagedObjectContext, ABAddressBook;
@protocol ABCreatePersonCommandDelegate;

@interface ABCreatePersonCommand : NSObject {
    NSManagedObjectContext *_managedObjectContext;
}

@property (retain) ABPersonListController *personListController;
@property (retain) ABAddressBook *addressBook;
@property (retain) id<ABCreatePersonCommandDelegate> delegate;
@property (retain) NSUndoManager *undoManager;
@property (retain) NSArray *parentGroupIDs;
@property (retain) ABAccount *destinationAccount;
@property BOOL ignoresGuardianRestrictions;

+ (id)log;

- (void).cxx_destruct;
- (void)setParentGroupsOfPerson:(id)a0;
- (void)saveAddressBookAndUpdatePersonListControllerForNewPerson:(id)a0;
- (unsigned long long)indexToMoveNewPersonEntryToGivenPreviousSelection:(unsigned long long)a0;
- (id)findAndMoveEntryForPerson:(id)a0 toIndex:(unsigned long long)a1;
- (unsigned long long)indexOfFirstNonMeEntry;
- (void)createPerson;

@end
