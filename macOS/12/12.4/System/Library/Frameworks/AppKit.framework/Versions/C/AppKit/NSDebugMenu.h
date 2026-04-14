@class NSMenu, NSMutableArray;

@interface NSDebugMenu : NSObject {
    NSMutableArray *_menuItemProviders;
    NSMenu *_debugMenu;
}

@property (readonly) NSMenu *debugMenu;

+ (id)appKitDebugMenuItemProviders;
+ (id)_menuItemProviderClasses;
+ (id)debugMenuInMenu:(id)a0;
+ (id)createDebugMenuItem;
+ (void)registerMenuItemProvider:(Class)a0;
+ (void)unregisterMenuItemProvider:(Class)a0;

- (void)dealloc;
- (id)init;

@end
