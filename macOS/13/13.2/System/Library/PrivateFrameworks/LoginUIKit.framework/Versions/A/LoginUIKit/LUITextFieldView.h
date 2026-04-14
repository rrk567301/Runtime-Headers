@class NSString, LUITextField, CALayer, NSStackView, LUIEffectsButton;

@interface LUITextFieldView : NSView <LUITextFieldDelegate, NSTextFieldDelegate> {
    CALayer *_backgroundLayer;
    NSStackView *_stackView;
    LUITextField *_textField;
    LUIEffectsButton *_actionButton;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityPlaceholderValue;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)setPlaceholderString:(id)a0;
- (id)placeholderString;
- (id)textField;
- (void)_setupSubviews;
- (void)setUIEnabled:(BOOL)a0;
- (id)_placeholderTextColor;
- (BOOL)textField:(id)a0 processTextMovement:(long long)a1;
- (void)actionButtonPressed:(id)a0;
- (float)_backgroundLayerOpacity;
- (BOOL)actionButtonIsHidden;
- (void)actionButtonSetHidden:(BOOL)a0;
- (void)actionButtonSetImage:(id)a0;
- (void)actionButtonSetAction:(SEL)a0;
- (void)actionButtonSetTarget:(id)a0;

@end
