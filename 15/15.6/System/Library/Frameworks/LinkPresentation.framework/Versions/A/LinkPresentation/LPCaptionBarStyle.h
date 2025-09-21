@class LPCollaborationFooterStyle, LPPointUnit, LPCaptionBarAccessoryStyle, LPAudioPlayButtonStyle, LPPadding, LPIconBadgeStyle, LPButtonStyle, NSColor, LPImageViewStyle, LPVerticalTextStackViewStyle;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge;
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *trailingPaddingForPresenceOfLeadingIcon;
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;
@property (nonatomic) char usesOutOfLineButton;
@property (nonatomic) char canAddLineForButton;
@property (nonatomic) char positionButtonRelativeToTextStack;
@property (nonatomic) char buttonRespectsTextStackPadding;
@property (nonatomic) char buttonIgnoresTextSafeAreaInsets;
@property (nonatomic) char addFullWidthLineForButton;
@property (nonatomic) char alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) char expandButtonToCaptionEdge;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter;
@property (retain, nonatomic) LPCollaborationFooterStyle *collaborationFooter;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 sizeClassParameters:(id)a2 fontScalingFactor:(double)a3;
- (id)leftAccessory;
- (id)leftIcon;
- (id)rightAccessory;
- (id)rightIcon;

@end
