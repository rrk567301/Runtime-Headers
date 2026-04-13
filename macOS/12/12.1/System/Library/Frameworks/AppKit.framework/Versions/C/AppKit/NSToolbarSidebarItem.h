@class NSButton;

@interface NSToolbarSidebarItem : NSToolbarItem {
    NSButton *_sidebarButton;
}

- (void)dealloc;
- (id)init;
- (void)validate;

@end
