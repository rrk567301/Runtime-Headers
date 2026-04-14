@class NSView, NSAttributedString, NSArray, NSColor, AMSUICommonImageView, AMSDialogAction, NSImageView, AMSUIMessageViewLayoutContext, AMSUICommonTextView;

@interface AMSUIMessageView : AMSUICommonView

@property unsigned long long style;
@property (retain) NSView *containerView;
@property (retain) NSView *imageContainerView;
@property (retain) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain) NSArray *separatorViews;
@property (retain) NSView *accessoryView;
@property (retain) NSArray *footerButtonViews;
@property (retain) NSImageView *backgroundImageView;
@property (readonly) AMSUICommonImageView *imageView;
@property (retain) NSAttributedString *message;
@property (copy) NSColor *separatorColor;
@property (readonly) AMSUICommonTextView *textView;
@property (readonly) AMSDialogAction *bodyAction;
@property (retain) NSAttributedString *title;
@property BOOL preLayoutImageView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setBackgroundColor:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)_setupDefaults;
- (void)_startObservations;
- (id)_makeSeparatorView;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)_endObservations;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)_setupInitialLayout;
- (void)_setupImageView;
- (void)_setBackground;
- (id)_defaultMessageFont;
- (id)_defaultMessageColor;
- (void)_setTextViewText;
- (id)_defaultTitleFont;
- (id)_defaultTitleColor;
- (void)_setShadow;
- (void)_setAccessibility;
- (void)setupBubbleArrowMaskView;
- (void)removeBubbleArrowMaskView;
- (void)_setTextAlignment;

@end
