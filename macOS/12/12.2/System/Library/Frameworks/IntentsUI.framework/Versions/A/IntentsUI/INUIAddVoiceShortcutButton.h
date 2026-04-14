@class NSImageView, NSTextField, CAFilter, INVoiceShortcut, NSLayoutConstraint, INShortcut;
@protocol INUIAddVoiceShortcutButtonDelegate;

@interface INUIAddVoiceShortcutButton : NSButton

@property (retain, nonatomic) INVoiceShortcut *voiceShortcut;
@property (retain, nonatomic) CAFilter *highlightFilter;
@property (weak, nonatomic) NSImageView *sphiriImageView;
@property (weak, nonatomic) NSImageView *checkmarkImageView;
@property (weak, nonatomic) NSTextField *addToSiriLabel;
@property (weak, nonatomic) NSTextField *phraseLabel;
@property (retain, nonatomic) NSLayoutConstraint *checkmarkHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addToSiriLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addedToSiriLeadingConstraint;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id<INUIAddVoiceShortcutButtonDelegate> delegate;
@property (retain, nonatomic) INShortcut *shortcut;
@property (nonatomic) double cornerRadius;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)sizeToFit;
- (double)_cornerRadius;
- (void)keyDown:(id)a0;
- (void)drawFocusRingMask;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)keyUp:(id)a0;
- (void)prepareForInterfaceBuilder;
- (void)_updateContent;
- (void)_updateColors;
- (void)_createHighlightFilterIfNecessary;
- (void)_configureWithStyle:(unsigned long long)a0;
- (id)_checkmarkImage;
- (id)_sphiriImageForStyle:(unsigned long long)a0;
- (id)_backgroundColorForStyle:(unsigned long long)a0;
- (id)_textColorForStyle:(unsigned long long)a0;
- (id)_strokeColorForStyle:(unsigned long long)a0;
- (double)_strokeWidthForStyle:(unsigned long long)a0;
- (id)_addToSiriText;
- (id)_addedToSiriText;
- (id)_phraseText;
- (id)_addToSiriFont;
- (id)_phraseFont;
- (BOOL)_shouldUseLargerFont;
- (id)_lightSphiriImage;
- (id)_darkSphiriImage;
- (id)_dynamicLightSphiriImage;
- (id)_dynamicDarkSphiriImage;
- (id)_dynamicWhiteColor;
- (id)_dynamicBlackColor;
- (void)_updatePhraseVisibility;
- (void)_didTapButton;
- (void)_checkAndUpdateForShortcut;
- (void)_handleVoiceShortcutUpdateNotification:(id)a0;

@end
