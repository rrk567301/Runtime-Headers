@interface BrowserToolbar : NSToolbar

@property (nonatomic) BOOL canHostUnifiedTabBar;

- (BOOL)_drawsBackground;
- (BOOL)_allowsSizeMode:(unsigned long long)a0;
- (BOOL)_allowsShowHideToolbarContextMenuItem;
- (void)_configSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)_allowsDisplayMode:(unsigned long long)a0;
- (void)validateVisibleItems;

@end
