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
- (id)firstDirectoryGroupEntry;
- (id)allDirectoriesGroupEntry;
- (id)allGroupEntries;
- (void)addEntriesForDirectories;
- (void)addEntriesForPersistentAccounts;
- (void)addEntriesForSmartGroups;
- (void)addEntryForAllContacts;
- (void)addSectionEntryWithIdentifier:(id)a0 name:(id)a1;
- (void)addEntriesForAccountEntries:(id)a0;
- (BOOL)shouldHideSmartGroupsSection;
- (unsigned long long)countOfVisibleSmartGroups;
- (BOOL)shouldAddEntryForAllContactsForAccountEntries:(id)a0;
- (BOOL)shouldAddGroupEntryForAllDirectories;
- (id)childrenEntriesForAccountEntries:(id)a0;
- (id)allContactsEntryForAccountEntries:(id)a0;
- (id)lastImportGroupEntry;
- (id)makeDirectoryEntriesForAccounts:(id)a0;
- (id)makeAggregateDirectoryWithName:(id)a0 directories:(id)a1;
- (id)makeEntriesForSmartGroups:(id)a0;
- (id)makeAllContactsEntryWithAccount:(id)a0;
- (id)directoriesString;
- (id)allDirectoriesString;
- (id)allContactsString;
- (id)smartGroupsString;
- (id)lastImportString;

@end
