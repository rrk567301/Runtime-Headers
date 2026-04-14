@interface ABPeoplePickerGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property BOOL includeAllContacts;
@property BOOL includeDirectories;

- (id)makeGroupEntriesWithHidingPolicy:(id)a0;
- (id)makeGroupEntries;

@end
