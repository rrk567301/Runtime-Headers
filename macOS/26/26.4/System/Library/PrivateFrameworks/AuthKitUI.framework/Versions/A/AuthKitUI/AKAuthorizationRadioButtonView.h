@class NSImageView, NSTextField, NSString, NSLayoutGuide, NSButton, NSMutableArray;

@interface AKAuthorizationRadioButtonView : NSView

@property (retain, nonatomic) NSButton *radioButton;
@property (weak, nonatomic) id internalTarget;
@property (nonatomic) SEL internalAction;
@property (retain, nonatomic) NSTextField *textLabel;
@property (retain, nonatomic) NSTextField *detailTextLabel;
@property (retain, nonatomic) NSImageView *checkmarkView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) NSLayoutGuide *textLabelLayoutGuide;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long tagIdentifier;
@property (nonatomic) BOOL shouldHideAccessibility;

+ (BOOL)requiresConstraintBasedLayout;

- (id)accessibilityRole;
- (id)initWithText:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)_buttonClicked:(id)a0;
- (id)_addRadioButton;
- (id)_addCheckmarkView;
- (id)_addLabelWithString:(id)a0;
- (void)_forceEnabled:(BOOL)a0;
- (id)initWithText:(id)a0 detailText:(id)a1;
- (id)initWithText:(id)a0 detailText:(id)a1 style:(unsigned long long)a2;

@end
