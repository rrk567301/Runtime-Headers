@interface VideosUI.SidebarViewController : VideosUI.BaseSidebarViewController {
    void /* unknown type, empty encoding */ librarySideBarManager;
    void /* unknown type, empty encoding */ hasContentDisplayed;
    void /* unknown type, empty encoding */ searchSidebarItem;
    void /* unknown type, empty encoding */ searchDetailsViewController;
    void /* unknown type, empty encoding */ searchField;
    void /* unknown type, empty encoding */ searchFieldDelegator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountSettingsView;
    void /* unknown type, empty encoding */ lastSelectedIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (void)vui_viewDidLoad;
- (void)vui_viewDidLayoutSubviews;

@end
