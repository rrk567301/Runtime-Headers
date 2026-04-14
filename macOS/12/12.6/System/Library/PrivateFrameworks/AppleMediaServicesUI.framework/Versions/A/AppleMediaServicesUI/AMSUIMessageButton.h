@class AMSDialogAction, NSFont;

@interface AMSUIMessageButton : AMSUICommonButton

@property unsigned long long messageStyle;
@property (readonly) AMSDialogAction *dialogAction;
@property (retain) NSFont *titleFont;

- (void).cxx_destruct;
- (id)_symbolConfiguration;
- (void)_setupWithDialogAction:(id)a0;
- (id)_defaultTextFont;
- (id)_defaultContentColor;
- (id)_closeImage;
- (id)_chevronImage;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (void)setFooterStyle;
- (BOOL)isDefaultCloseButton;

@end
