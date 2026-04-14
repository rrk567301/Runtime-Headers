@class NSImageView, NSTextField, NSString, NSLayoutGuide, NSButton, NSMutableArray;

@interface AKAuthorizationRadioButtonView : NSView

@property (retain) NSButton *radioButton;
@property (weak) id internalTarget;
@property SEL internalAction;
@property (retain) NSTextField *textLabel;
@property (retain) NSTextField *detailTextLabel;
@property (retain) NSImageView *checkmarkView;
@property (retain) NSMutableArray *constraints;
@property (retain) NSLayoutGuide *textLabelLayoutGuide;
@property (copy) NSString *text;
@property (copy) NSString *detailText;
@property (readonly) unsigned long long style;
@property (getter=isEnabled) BOOL enabled;
@property long long tagIdentifier;
@property BOOL shouldHideAccessibility;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 detailText:(id)a1 style:(unsigned long long)a2;
- (id)_addLabelWithString:(id)a0;
- (id)_addRadioButton;
- (void)_buttonClicked:(id)a0;
- (id)_addCheckmarkView;
- (void)_forceEnabled:(BOOL)a0;
- (id)initWithText:(id)a0 detailText:(id)a1;

@end
