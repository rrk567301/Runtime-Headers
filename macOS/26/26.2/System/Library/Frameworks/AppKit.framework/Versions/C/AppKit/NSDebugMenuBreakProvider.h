@class NSMenuItem;

@interface NSDebugMenuBreakProvider : NSObject <NSDebugMenuItemProvider>

@property (nonatomic, retain) NSMenuItem *menuItem;

- (void).cxx_destruct;
- (id)init;
- (void)breakInDebugger:(id)a0;

@end
