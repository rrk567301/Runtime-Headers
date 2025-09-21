@class AMSDialogAction, NSColor, NSFont;

@interface AMSUIMessageButton : AMSUICommonButton

@property unsigned long long messageStyle;
@property (readonly) AMSDialogAction *dialogAction;
@property (retain) NSFont *preferredFont;
@property (retain) NSColor *preferredForegroundColor;
@property (retain) NSColor *preferredBackgroundColor;

+ (id)_platterBackgroundForBaseColor:(id)a0 style:(unsigned long long)a1;

- (id)_symbolConfiguration;
- (void).cxx_destruct;
- (id)_chevronImage;
- (id)_closeImage;
- (void)_setAccessibilityIdentifier;
- (void)_setupWithDialogAction:(id)a0;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (BOOL)isBannerStyle:(unsigned long long)a0;
- (BOOL)isBubbleTipStyle:(unsigned long long)a0;
- (BOOL)isDefaultCloseButton;

@end
