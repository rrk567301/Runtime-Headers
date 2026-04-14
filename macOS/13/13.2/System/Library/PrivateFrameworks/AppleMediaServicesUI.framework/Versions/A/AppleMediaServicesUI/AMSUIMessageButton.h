@class AMSDialogAction, NSColor, NSFont;

@interface AMSUIMessageButton : AMSUICommonButton

@property unsigned long long messageStyle;
@property BOOL isFooterButton;
@property (readonly) AMSDialogAction *dialogAction;
@property (retain) NSFont *preferredFont;
@property (retain) NSColor *preferredForegroundColor;
@property (retain) NSColor *preferredBackgroundColor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_symbolConfiguration;
- (void)_startObservations;
- (id)_chevronImage;
- (void)_endObservations;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (void)_setupWithDialogAction:(id)a0;
- (id)_appendChevronToString:(id)a0;
- (void)_setImagePadding;
- (void)setFooterStyle;
- (void)_setAXSettings;
- (BOOL)isDefaultCloseButton;
- (id)_closeImage;
- (id)_defaultContentColor;
- (id)_defaultIconColor;
- (id)_defaultTextFont;
- (void)_axSettingsDidUpdate:(id)a0;

@end
