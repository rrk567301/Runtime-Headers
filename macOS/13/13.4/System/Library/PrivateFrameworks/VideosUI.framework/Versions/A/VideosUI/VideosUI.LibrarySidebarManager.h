@interface VideosUI.LibrarySidebarManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sidebarProvider;
    void /* unknown type, empty encoding */ localSideBarModel;
    void /* unknown type, empty encoding */ cachedItunesSideBarItems;
    void /* unknown type, empty encoding */ selectedItemForContextMenu;
    void /* unknown type, empty encoding */ pendingActions;
    void /* unknown type, empty encoding */ familyMembers;
    void /* unknown type, empty encoding */ familyMemberServiceRequest;
    void /* unknown type, empty encoding */ homeSharingDevices;
}

- (void)didSelectMenuItem:(id)a0;
- (void)fetchConnectedDeviceList;
- (void)fetchHomeSharingList;
- (void)fetchPlaylistSidebarItems;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
