@class NSString, NSMutableArray, ABAddressBook;

@interface ABApplyPrivacyFieldsToLinkedRecordsCommand : ABBookUndoableCommand {
    NSString *_personIdentifier;
    ABAddressBook *_addressBook;
    NSMutableArray *_privatizedFields;
    char ignoresGuardianRestrictions;
}

+ (id)commandWithPerson:(id)a0;

- (void)dealloc;
- (void)execute;
- (void)markPrivateIdentifier:(id)a0 property:(id)a1;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)applyPrivacyFieldsUsingMap:(id)a0;
- (void)executeUndo;
- (id)fetchPerson;
- (char)ignoresGuardianRestrictions;
- (id)initWithPersonIdentifier:(id)a0 addressBook:(id)a1;
- (id)makeIdentifierMap;
- (id)reindexMap:(id)a0;

@end
