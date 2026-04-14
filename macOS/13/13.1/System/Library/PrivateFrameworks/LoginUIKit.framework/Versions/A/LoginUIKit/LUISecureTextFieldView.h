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
- (id)target;
- (void)setTarget:(id)a0;
- (void)setMode:(int)a0;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (int)mode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityPlaceholderValue;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)controlTextDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)setPlaceholderString:(id)a0;
- (id)placeholderString;
- (void)_setupSubviews;
- (id)secureTextField;
- (void)setUIEnabled:(BOOL)a0;
- (void)actionButtonPressed:(id)a0;
- (float)_backgroundLayerOpacity;
- (id)_passwordErrorImage;
- (id)_passwordHintImage;
- (id)_goButtonImage;
- (void)_refreshButtonsAfterKeyInput;
- (void)_resetButtonUIToMode:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressRect;
- (struct CGPoint { double x0; double x1; })pointForPopover:(int)a0;
- (BOOL)usesHint;
- (void)setUsesHint:(BOOL)a0;
- (void)resetPassword;
- (void)forceClearFocusRing;
- (void)forceDrawFocusRing;

@end
