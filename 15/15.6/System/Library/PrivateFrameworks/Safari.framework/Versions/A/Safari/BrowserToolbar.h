@interface BrowserToolbar : NSToolbar

@property (nonatomic) char canHostUnifiedTabBar;

- (char)_allowsDisplayMode:(unsigned long long)a0;
- (void)validateVisibleItems;

@end
