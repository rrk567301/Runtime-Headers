@class NSMenuItem;

@interface NSDebugMenuBreakProvider : NSObject <NSDebugMenuItemProvider>

@property (nonatomic, retain) NSMenuItem *menuItem;

- (id)init;
- (void).cxx_destruct;
- (void)breakInDebugger:(id)a0;

@end
