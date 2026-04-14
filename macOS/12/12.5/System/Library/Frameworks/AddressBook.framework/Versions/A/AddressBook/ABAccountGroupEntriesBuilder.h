@class ABAccount, ABAddressBook;

@interface ABAccountGroupEntriesBuilder : NSObject {
    ABAccount *_account;
    ABAddressBook *_addressBook;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 addressBook:(id)a1;
- (id)buildEntries;
- (id)groupsForEntries;
- (void)addEntryForGroup:(id)a0 to:(id)a1;
- (BOOL)shouldAddEntryForGroup:(id)a0;
- (id)entryForGroup:(id)a0;
- (id)buildEntriesForGroups;
- (id)buildEntryForAllContacts:(unsigned long long)a0;
- (id)buildEntryForSearching;

@end
