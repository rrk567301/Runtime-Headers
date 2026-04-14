@interface BrowserToolbar : NSToolbar

@property (nonatomic) BOOL canHostUnifiedTabBar;

- (BOOL)_allowsDisplayMode:(unsigned long long)a0;
- (void)_configSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)validateVisibleItems;

@end
