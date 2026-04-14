@class NSString, NSMutableArray, NSArray;

@interface SidebarDataSource : NSObject <NSTableViewDataSource> {
    NSMutableArray *_sidebarItems;
    unsigned long long _usersGroupsState;
    BOOL _showsNetworkUsers;
    BOOL _showsNetworkGroups;
    BOOL _showsAddressBook;
    BOOL _showsAddressBookGroups;
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
- (void)setShowsNetworkUsers:(BOOL)a0;
- (BOOL)showsNetworkUsers;
- (void)setShowsNetworkGroups:(BOOL)a0;
- (BOOL)showsNetworkGroups;
- (void)setShowsAddressBook:(BOOL)a0;
- (BOOL)showsAddressBook;
- (void)setShowsAddressBookGroups:(BOOL)a0;
- (BOOL)showsAddressBookGroups;
- (BOOL)networkDirectoryServer;
- (void)updateSidebar;
- (void)setUsersGroups:(unsigned long long)a0;
- (unsigned long long)usersGroups;
- (void)setAddressBookGroups:(id)a0;

@end
