@interface BrowserToolbarItem : NSToolbarItem

@property (nonatomic) unsigned long long handledMouseDownModifiersMask;

- (char)_allowToolbarToStealEvent:(id)a0;
- (void)validate;
- (char)_viewMightProcessModifiedMouseDownEvent;
- (id)initWithItemIdentifier:(id)a0 button:(id)a1;
- (id)initWithItemIdentifier:(id)a0 view:(id)a1;

@end
