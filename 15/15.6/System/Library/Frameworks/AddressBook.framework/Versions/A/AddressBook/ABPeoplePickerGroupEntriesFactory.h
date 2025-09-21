@interface ABPeoplePickerGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property char includeAllContacts;
@property char includeDirectories;

- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;

@end
