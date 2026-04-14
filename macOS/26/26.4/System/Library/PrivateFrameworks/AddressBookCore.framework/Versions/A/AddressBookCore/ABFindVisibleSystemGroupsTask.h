@class ABAddressBook;

@interface ABFindVisibleSystemGroupsTask : CNTask

@property (readonly) ABAddressBook *addressBook;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)findDupesOfHomeGroups:(id)a0;
- (id)findHomeGroups;
- (id)initWithAddressBook:(id)a0;

@end
