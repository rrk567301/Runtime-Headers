@interface _NSServicesPrincipalMenuUpdater : _NSServicesMenuUpdater

+ (id)_sharedPrincipalUpdater;

- (void)dealloc;
- (id)init;
- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (BOOL)menuShowsKeyEquivalents;
- (BOOL)contentsNeedsUpdatingForMenu:(id)a0;
- (unsigned long long)serviceEntryKinds;
- (void)populateMenuForUnavailableServices:(id)a0;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(BOOL)a2;
- (void)updateVisibilityOfServicesItemsForMenu:(id)a0 isForDisplay:(BOOL)a1;
- (id)menuContext;
- (id)menus;
- (void)addNonserviceMenuItemsToMenu:(id)a0;

@end
