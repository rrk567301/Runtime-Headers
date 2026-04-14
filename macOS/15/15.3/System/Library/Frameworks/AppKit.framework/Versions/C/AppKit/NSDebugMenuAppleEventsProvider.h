@class NSString, NSMenuItem;

@interface NSDebugMenuAppleEventsProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aeQuit:(id)a0;
- (id)appleEventsMenu;
- (BOOL)worksWhenModal;

@end
