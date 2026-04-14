@class NSView, NSAttributedString, AMSUICommonVisualEffectView, NSArray, NSScrollView, MicaPlayer, NSColor, AMSUICommonImageView, AMSDialogAction, NSImageView, AMSUICommonTextView;
@protocol AMSUIMessageViewLayoutContextProtocol;

@interface AMSUIMessageView : AMSUICommonView

@property (retain) NSArray *ams_accessibilitySupplementaryFooterViews;
@property (retain) AMSUICommonVisualEffectView *backgroundVisualEffectView;
@property (retain) NSScrollView *containerView;
@property BOOL isUsingCustomBackground;
@property (retain) NSView *imageContainerView;
@property (retain) NSView *exclusionView;
@property unsigned long long imageStyle;
@property (retain) id<AMSUIMessageViewLayoutContextProtocol> layoutContext;
@property (retain) MicaPlayer *micaPlayer;
@property (retain) NSArray *separatorViews;
@property unsigned long long style;
@property (readonly) NSView *accessoryView;
@property (readonly) NSView *accessorySecondaryView;
@property (retain) NSImageView *backgroundImageView;
@property (retain) NSArray *buttons;
@property (readonly) NSArray *footerButtons;
@property (copy) NSColor *iconColor;
@property (readonly) AMSUICommonImageView *imageView;
@property BOOL isImageSymbolImage;
@property BOOL isSizing;
@property (retain) NSAttributedString *message;
@property (copy) NSColor *separatorColor;
@property (readonly) AMSUICommonTextView *textView;
@property (readonly) AMSDialogAction *bodyAction;
@property (retain) NSAttributedString *title;
@property BOOL preLayoutImageView;

- (void)_setupDefaults;
- (id)initWithStyle:(unsigned long long)a0;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)_setupImageView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_makeSeparatorView;
- (void)_startObservations;
- (double)_textViewParagraphSpacingBefore;
- (double)_amsBaseCornerRadius;
- (double)_amsCornerRadius;
- (void)_endObservations;
- (void)_recordNewsDebugEventWithCategory:(id)a0;
- (void)_setAccessibility;
- (void)_setAccessibilityIdentifier;
- (void)_setBackground;
- (void)_setBackgroundDefault;
- (void)_setMICAPlayerTintColor:(id)a0;
- (void)_setShadow;
- (void)_setTextViewText;
- (void)_setupExclusionPathVisual;
- (void)_setupImageViewDefault;
- (void)_setupInitialLayout;
- (void)_setupMICAAssetWithData:(id)a0 originalURL:(id)a1;
- (void)_userInterfaceStyleDidChange;
- (BOOL)isBannerStyle;
- (BOOL)isBubbleTipStyle;
- (void)removeBubbleArrowMaskView;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setButtonsForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)set_ams_backgroundColor:(id)a0;
- (void)setupBubbleArrowMaskView;

@end
