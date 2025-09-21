@class ABGroupEntry, NSArray, NSMutableArray, ABAddressBook;

@interface ABGroupEntriesBuilder : NSObject {
    NSMutableArray *_identifiersOfAccountsWithProvisionalEntryForNewGroup;
    NSMutableArray *_allGroupEntries;
    ABGroupEntry *_allDirectoriesGroupEntry;
    ABGroupEntry *_firstDirectoryGroupEntry;
}

@property (retain) ABAddressBook *addressBook;
@property (retain) NSArray *directoryAccounts;
@property (retain) NSArray *persistentAccounts;
@property (retain) NSArray *smartGroups;
@property char includeAllContactsForEachAccount;
@property char includeDirectoriesHeader;
@property char includeHeaders;
@property char includeLastImport;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0;
- (void)addEntriesForPersistentAccounts;
- (id)allGroupEntries;
- (void)addEntriesForDirectories;
- (void)addEntriesForSmartGroups;
- (void)addEntryForAllContacts;
- (void)addSectionEntryWithIdentifier:(id)a0 name:(id)a1;
- (id)allDirectoriesGroupEntry;
- (id)firstDirectoryGroupEntry;
- (void)addEntriesForAccountEntries:(id)a0;
- (void)addProvisionalEntryForNewGroupInAccountWithIdentifier:(id)a0;
- (id)allContactsEntryForAccountEntries:(id)a0;
- (id)allContactsString;
- (id)allDirectoriesString;
- (id)childrenEntriesForAccountEntries:(id)a0;
- (unsigned long long)countOfVisibleSmartGroups;
- (id)directoriesString;
- (id)lastImportGroupEntry;
- (id)lastImportString;
- (id)makeAggregateDirectoryWithName:(id)a0 directories:(id)a1;
- (id)makeAllContactsEntryWithAccount:(id)a0;
- (id)makeDirectoryEntriesForAccounts:(id)a0;
- (id)makeEntriesForSmartGroups:(id)a0;
- (char)shouldAddEntryForAllContactsForAccountEntries:(id)a0;
- (char)shouldAddGroupEntryForAllDirectories;
- (char)shouldHideSmartGroupsSection;
- (id)smartGroupsString;

@end
