@class NSMenu, NSMenuItem;

@interface _NSServicesContextMenuUpdater : _NSServicesMenuUpdater {
    id _requestorChain;
    NSMenu *_pluggingMenu;
    NSMenu *_pluggedMenu;
    NSMenuItem *_submenuItem;
}

- (void)dealloc;
- (void)dispose;
- (void)updateForLiveServicesChangedNotification:(id)a0;
- (unsigned long long)serviceEntryKinds;
- (BOOL)sortByCategory;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(BOOL)a2;
- (id)menuContext;
- (id)menus;
- (void)performServiceFromEntry:(id)a0 invocationSourceType:(unsigned long long)a1;
- (id)initWithMenuRef:(struct OpaqueMenuRef { } *)a0 correspondingToMenu:(id)a1 withRequestorChain:(id)a2;

@end
