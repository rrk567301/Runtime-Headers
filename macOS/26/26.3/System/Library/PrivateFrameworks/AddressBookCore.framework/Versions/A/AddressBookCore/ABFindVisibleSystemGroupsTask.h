@class ABAddressBook;

@interface ABFindVisibleSystemGroupsTask : CNTask

@property (readonly) ABAddressBook *addressBook;

- (id)run:(id *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)findDupesOfHomeGroups:(id)a0;
- (id)findHomeGroups;
- (id)initWithAddressBook:(id)a0;

@end
