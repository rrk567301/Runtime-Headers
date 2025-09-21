@class NSDebugMenuUserDefaultController, NSString, NSMenuItem;

@interface NSDebugMenuGameControllersProvider : NSObject <NSMenuDelegate, NSMenuItemValidation, NSDebugMenuItemProvider>

@property (class, readonly, nonatomic) NSDebugMenuUserDefaultController *navigationEnabledController;

@property BOOL sawFirstUpdate;
@property int notifyToken;
@property (readonly) unsigned long long systemStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

- (BOOL)validateMenuItem:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_showSessionState:(id)a0;
- (unsigned long long)_systemStatusFlagForItem:(id)a0;
- (void)_toggleSystemStatusFlag:(id)a0;
- (void)_updateSessionStateSectionForMenu:(id)a0;
- (void)_updateSystemStatusSectionForMenu:(id)a0;
- (void)_updateUserDefaultsSectionForMenu:(id)a0;

@end
