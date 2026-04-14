@class CAGradientLayer, NSTextField, NSString, NSLayoutConstraint, PRMonogram;

@interface PRMonogramView : NSView <NSTextFieldDelegate>

@property (retain, nonatomic) NSTextField *textField;
@property (retain, nonatomic) NSLayoutConstraint *textFieldYOffset;
@property (retain, nonatomic) CAGradientLayer *circleGradient;
@property (nonatomic, getter=isCircular) BOOL circular;
@property (retain, nonatomic) PRMonogram *monogram;
@property (nonatomic) BOOL bordered;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL allowsEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implicitAnimatedActionsToDisable;
+ (id)makeTextField;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_monogramView_CommonInit;
- (void)textFieldResignFirstResponder;
- (void)updateVisualAppearance;
- (void)registerKVOForMonogram:(id)a0;
- (void)deregisterKVOForMonogram:(id)a0;
- (BOOL)shouldDisplayTextEffectsForMonogram:(id)a0;
- (void)updateWithMonogram:(id)a0;
- (void)updateTextField;
- (id)_monogramTextColor;
- (id)_plateColor;
- (void)restoreMonogramString;
- (void)saveMonogramString;

@end
