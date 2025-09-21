@interface BrowserToolbar : NSToolbar

@property (nonatomic) BOOL canHostUnifiedTabBar;

- (void)validateVisibleItems;
- (BOOL)_allowsDisplayMode:(unsigned long long)a0;

@end
