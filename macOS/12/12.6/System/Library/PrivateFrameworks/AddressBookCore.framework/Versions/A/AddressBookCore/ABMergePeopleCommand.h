@class NSArray, NSDictionary, NSMutableArray, ABAddressBook;

@interface ABMergePeopleCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    NSArray *_initialPeople;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSDictionary *snapshotBefore;
@property (copy) NSDictionary *snapshotAfter;
@property (copy) NSArray *resultingPeopleUIDs;
@property (readonly) NSMutableArray *resultingPeople;

- (void)dealloc;
- (void)execute;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (void)executeRedo;
- (void)clearResultingPeople;
- (id)makeSnapshotOfPeople:(id)a0;
- (void)mergePeopleWithinEachAccount;
- (void)rememberResultingUIDs;
- (void)mergePeopleIntoFirstPerson:(id)a0;
- (void)deleteResultingPeople;
- (void)recreatePeopleFromSnapshot:(id)a0;
- (id)recreatePeople:(id)a0 inStoreAtURL:(id)a1;
- (id)makePersonFromDictionary:(id)a0 inStoreAtURL:(id)a1;
- (id)initWithPeople:(id)a0 addressBook:(id)a1;

@end
