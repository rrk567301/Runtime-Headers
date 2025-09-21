@interface _NSServicesPrincipalMenuUpdater : _NSServicesMenuUpdater

+ (id)_sharedPrincipalUpdater;

- (void)dealloc;
- (id)init;
- (char)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)addNonserviceMenuItemsToMenu:(id)a0;
- (char)contentsNeedsUpdatingForMenu:(id)a0;
- (id)menuContext;
- (void)menuDidClose:(id)a0;
- (char)menuShowsKeyEquivalents;
- (void)menuWillOpen:(id)a0;
- (id)menus;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(char)a2;
- (void)populateMenuForUnavailableServices:(id)a0;
- (unsigned long long)serviceEntryKinds;
- (void)updateVisibilityOfServicesItemsForMenu:(id)a0 isForDisplay:(char)a1;

@end
