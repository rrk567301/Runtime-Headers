@class NSView, NSAttributedString, NSScrollView, NSArray, NSColor, AMSUICommonImageView, AMSDialogAction, NSImageView, AMSUIMessageViewLayoutContext, AMSUICommonTextView;
@protocol AMSUIMessageViewDelegate;

@interface AMSUIMessageView : AMSUICommonView

@property unsigned long long imageStyle;
@property unsigned long long style;
@property (retain) NSScrollView *containerView;
@property (retain) NSView *imageContainerView;
@property (retain) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain) NSArray *separatorViews;
@property (retain) NSView *accessoryView;
@property (retain) NSView *accessorySecondaryView;
@property (weak) id<AMSUIMessageViewDelegate> ams_delegate;
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
- (id)_makeSeparatorView;
- (void)_startObservations;
- (void)_setupImageView;
- (double)_textViewParagraphSpacingBefore;
- (id)_defaultImageViewColor;
- (id)_defaultMessageColor;
- (id)_defaultMessageFont;
- (id)_defaultTitleColor;
- (id)_defaultTitleFont;
- (void)_endObservations;
- (void)_setAccessibility;
- (void)_setAccessibilityIdentifier;
- (void)_setBackground;
- (void)_setShadow;
- (void)_setTextAlignment;
- (void)_setTextViewText;
- (void)_setupImageViewDefault;
- (void)_setupInitialLayout;
- (void)removeBubbleArrowMaskView;
- (void)setAccessorySecondaryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setupBubbleArrowMaskView;

@end
