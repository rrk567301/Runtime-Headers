@class NSString, NSMutableArray, NSArray;

@interface SidebarDataSource : NSObject <NSTableViewDataSource> {
    NSMutableArray *_sidebarItems;
    unsigned long long _usersGroupsState;
    char _showsNetworkUsers;
    char _showsNetworkGroups;
    char _showsAddressBook;
    char _showsAddressBookGroups;
    NSArray *_addressBookGroups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)setUsersGroups:(unsigned long long)a0;
- (char)networkDirectoryServer;
- (void)setAddressBookGroups:(id)a0;
- (void)setShowsAddressBook:(char)a0;
- (void)setShowsAddressBookGroups:(char)a0;
- (void)setShowsNetworkGroups:(char)a0;
- (void)setShowsNetworkUsers:(char)a0;
- (char)showsAddressBook;
- (char)showsAddressBookGroups;
- (char)showsNetworkGroups;
- (char)showsNetworkUsers;
- (void)updateSidebar;
- (unsigned long long)usersGroups;

@end
