@class NSView, NSAttributedString, NSScrollView, NSArray, NSColor, AMSUICommonImageView, AMSDialogAction, NSImageView, AMSUIMessageViewLayoutContext, AMSUICommonTextView;

@interface AMSUIMessageView : AMSUICommonView

@property unsigned long long imageStyle;
@property unsigned long long style;
@property (retain) NSScrollView *containerView;
@property (retain) NSView *imageContainerView;
@property (retain) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain) NSArray *separatorViews;
@property (retain) NSView *accessoryView;
@property (retain) NSView *accessorySecondaryView;
@property (retain) NSArray *footerButtonViews;
@property (retain) NSImageView *backgroundImageView;
@property (readonly) AMSUICommonImageView *imageView;
@property BOOL isSizing;
@property (retain) NSAttributedString *message;
@property (copy) NSColor *separatorColor;
@property (readonly) AMSUICommonTextView *textView;
@property (readonly) AMSDialogAction *bodyAction;
@property (retain) NSAttributedString *title;
@property BOOL preLayoutImageView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setBackgroundColor:(id)a0;
- (void)_setupDefaults;
- (void)_startObservations;
- (id)_makeSeparatorView;
- (void)_endObservations;
- (void)_setupInitialLayout;
- (void)_setShadow;
- (void)_setBackground;
- (void)_setupImageView;
- (void)_setAccessibility;
- (void)_setTextViewText;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setAccessorySecondaryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setupBubbleArrowMaskView;
- (void)removeBubbleArrowMaskView;
- (id)_defaultMessageColor;
- (id)_defaultMessageFont;
- (id)_defaultTitleColor;
- (id)_defaultTitleFont;
- (void)_setTextAlignment;
- (double)_textViewParagraphSpacingBefore;

@end
