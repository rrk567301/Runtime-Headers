@class ABGroupEntry, NSArray, NSMutableArray, ABAddressBook;

@interface ABGroupEntriesBuilder : NSObject {
    NSMutableArray *_allGroupEntries;
    ABGroupEntry *_allDirectoriesGroupEntry;
    ABGroupEntry *_firstDirectoryGroupEntry;
}

@property (retain) ABAddressBook *addressBook;
@property (retain) NSArray *directoryAccounts;
@property (retain) NSArray *persistentAccounts;
@property (retain) NSArray *smartGroups;
@property BOOL includeAllContactsForEachAccount;
@property BOOL includeDirectoriesHeader;
@property BOOL includeHeaders;
@property BOOL includeLastImport;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0;
- (void)addSectionEntryWithIdentifier:(id)a0 name:(id)a1;
- (void)addEntryForAllContacts;
- (void)addEntriesForPersistentAccounts;
- (void)addEntriesForDirectories;
- (void)addEntriesForSmartGroups;
- (id)allGroupEntries;
- (id)allDirectoriesGroupEntry;
- (id)firstDirectoryGroupEntry;
- (id)makeAllContactsEntryWithAccount:(id)a0;
- (void)addEntriesForAccountEntries:(id)a0;
- (id)childrenEntriesForAccountEntries:(id)a0;
- (id)makeDirectoryEntriesForAccounts:(id)a0;
- (id)directoriesString;
- (id)makeAggregateDirectoryWithName:(id)a0 directories:(id)a1;
- (BOOL)shouldHideSmartGroupsSection;
- (id)lastImportGroupEntry;
- (id)makeEntriesForSmartGroups:(id)a0;
- (id)smartGroupsString;
- (unsigned long long)countOfVisibleSmartGroups;
- (id)allContactsEntryForAccountEntries:(id)a0;
- (BOOL)shouldAddEntryForAllContactsForAccountEntries:(id)a0;
- (id)lastImportString;
- (BOOL)shouldAddGroupEntryForAllDirectories;
- (id)allDirectoriesString;
- (id)allContactsString;

@end
