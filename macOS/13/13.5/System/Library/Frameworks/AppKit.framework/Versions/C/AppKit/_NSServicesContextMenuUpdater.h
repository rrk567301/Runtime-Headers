@class NSMenu, NSMenuItem;

@interface _NSServicesContextMenuUpdater : _NSServicesMenuUpdater {
    id _requestorChain;
    NSMenu *_pluggingMenu;
    NSMenu *_pluggedMenu;
    NSMenuItem *_submenuItem;
}

- (void)dealloc;
- (void)dispose;
- (id)initWithMenuRef:(struct OpaqueMenuRef { } *)a0 correspondingToMenu:(id)a1 withRequestorChain:(id)a2;
- (id)menuContext;
- (id)menus;
- (void)performServiceFromEntry:(id)a0 invocationSourceType:(unsigned long long)a1;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(BOOL)a2;
- (unsigned long long)serviceEntryKinds;
- (BOOL)sortByCategory;
- (void)updateForLiveServicesChangedNotification:(id)a0;

@end
