@class NSProgressIndicator, NSString, CALayer, LUISecureTextField, NSStackView, LUIEffectsButton, NSImageView, NSButton;

@interface LUISecureTextFieldView : NSView <NSTextFieldDelegate> {
    CALayer *_backgroundLayer;
    NSStackView *_stackView;
    LUISecureTextField *_secureTextField;
    NSButton *_hintButton;
    NSImageView *_errorImageView;
    NSProgressIndicator *_securityFieldProgressIndicator;
    LUIEffectsButton *_securityFieldGoButton;
    id _target;
    SEL _action;
    BOOL _usesHint;
    int _currentMode;
    long long _previousLength;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setMode:(int)a0;
- (SEL)action;
- (void)setAction:(SEL)a0;
- (int)mode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityPlaceholderValue;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)controlTextDidChange:(id)a0;
- (void)setPlaceholderString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)placeholderString;
- (id)secureTextField;
- (void)setUIEnabled:(BOOL)a0;
- (float)_backgroundLayerOpacity;
- (void)actionButtonPressed:(id)a0;
- (id)_passwordHintImage;
- (id)_passwordErrorImage;
- (id)_goButtonImage;
- (void)_resetButtonUIToMode:(int)a0;
- (void)_refreshButtonsAfterKeyInput;
- (void)_setupSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressRect;
- (struct CGPoint { double x0; double x1; })pointForPopover:(int)a0;
- (BOOL)usesHint;
- (void)setUsesHint:(BOOL)a0;
- (void)resetPassword;
- (void)forceClearFocusRing;
- (void)forceDrawFocusRing;

@end
