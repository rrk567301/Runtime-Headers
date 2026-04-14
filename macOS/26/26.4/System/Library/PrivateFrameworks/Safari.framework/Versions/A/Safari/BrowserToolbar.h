@protocol BrowserToolbarDelegate;

@interface BrowserToolbar : NSToolbar

@property (nonatomic) BOOL canHostUnifiedTabBar;
@property (weak) id<BrowserToolbarDelegate> delegate;

- (void)validateVisibleItems;
- (BOOL)_allowsDisplayMode:(unsigned long long)a0;

@end
