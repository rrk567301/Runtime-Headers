@class NSString;

@interface _NSServicesMenuUpdater : NSObject <NSMenuDelegate> {
    unsigned long long _updateGeneration;
    struct OpaqueMenuRef { } *_pluggedMenuRef;
    int _servicesSeedChangeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (BOOL)worksWhenModal;
- (void)_processRequest:(id)a0;
- (void)updateForLiveServicesChangedNotification:(id)a0;
- (unsigned long long)serviceEntryKinds;
- (id)menuContext;
- (id)menus;
- (BOOL)menuShowsKeyEquivalents;
- (BOOL)contentsNeedsUpdatingForMenu:(id)a0;
- (void)populateMenuForUnavailableServices:(id)a0;
- (void)updateVisibilityOfServicesItemsForMenu:(id)a0 isForDisplay:(BOOL)a1;
- (BOOL)sortByCategory;
- (void)registerCommonServicesIfNecessary;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(BOOL)a2;
- (void)insertServicesIntoMenu:(id)a0 withKeyEvent:(id)a1 isForDisplay:(BOOL)a2;
- (void)plugMenu:(id)a0 intoMenuRef:(struct OpaqueMenuRef { } *)a1;
- (void)unplugMenu:(id)a0;
- (BOOL)isPluggedIntoMenuRef:(struct OpaqueMenuRef { } *)a0;
- (void)performServiceFromEntry:(id)a0 invocationSourceType:(unsigned long long)a1;

@end
