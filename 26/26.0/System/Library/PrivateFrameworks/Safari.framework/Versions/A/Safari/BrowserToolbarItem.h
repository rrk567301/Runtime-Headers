@interface BrowserToolbarItem : NSToolbarItem

@property (nonatomic) unsigned long long handledMouseDownModifiersMask;

- (void)validate;
- (BOOL)_allowToolbarToStealEvent:(id)a0;
- (BOOL)_viewMightProcessModifiedMouseDownEvent;
- (id)initWithItemIdentifier:(id)a0 button:(id)a1;
- (id)initWithItemIdentifier:(id)a0 view:(id)a1;

@end
