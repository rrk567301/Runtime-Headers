@class NSString, NSMenuItem;

@interface NSDebugMenuTextStylesProvider : NSObject <NSDebugMenuItemProvider> {
    NSMenuItem *_menuItem;
}

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
