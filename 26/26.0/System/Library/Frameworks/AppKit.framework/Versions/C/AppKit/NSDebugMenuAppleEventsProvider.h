@class NSString, NSMenuItem;

@interface NSDebugMenuAppleEventsProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appleEventsMenu;
- (void)aeLogOutAndDiscardState:(id)a0;
- (void)aeLogOutAndPreserveState:(id)a0;
- (void)aeQuitAndDiscardState:(id)a0;
- (void)aeQuitAndPreserveState:(id)a0;
- (void)aeRestartAndDiscardState:(id)a0;
- (void)aeRestartAndPreserveState:(id)a0;
- (BOOL)worksWhenModal;

@end
