@class NSString, LUITextField, CALayer, NSStackView, LUIEffectsButton;

@interface LUITextFieldView : NSView <LUITextFieldDelegate, NSTextFieldDelegate> {
    CALayer *_backgroundLayer;
    NSStackView *_stackView;
    LUITextField *_textField;
    LUIEffectsButton *_actionButton;
}

@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)textField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)accessibilityPlaceholderValue;
- (void)controlTextDidBeginEditing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)placeholderString;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholderString:(id)a0;
- (void)_setupSubviews;
- (float)_backgroundLayerOpacity;
- (id)_placeholderTextColor;
- (BOOL)actionButtonIsHidden;
- (void)actionButtonPressed:(id)a0;
- (void)actionButtonSetAction:(SEL)a0;
- (void)actionButtonSetHidden:(BOOL)a0;
- (void)actionButtonSetImage:(id)a0;
- (void)actionButtonSetTarget:(id)a0;
- (void)setUIEnabled:(BOOL)a0;
- (BOOL)textField:(id)a0 processTextMovement:(long long)a1;

@end
