@class NSTextField, NSView, NSLayoutGuide, NSString, NSArray, PKPaymentAuthorizationLayout, NSMutableArray, NSImageView;

@interface PKPaymentAuthorizationItemView : NSView

@property (retain, nonatomic) NSTextField *labelTextField;
@property (retain, nonatomic) NSMutableArray *valueViews;
@property (retain, nonatomic) NSImageView *paymentFailureView;
@property (retain, nonatomic) NSMutableArray *labelConstraints;
@property (retain, nonatomic) NSMutableArray *valueConstraints;
@property (retain, nonatomic) NSMutableArray *accessoryConstraints;
@property (retain, nonatomic) NSMutableArray *paymentFailureConstraints;
@property (retain, nonatomic) NSMutableArray *badgeConstraints;
@property (retain, nonatomic) NSLayoutGuide *viewContentLeadingGuide;
@property (retain, nonatomic) NSLayoutGuide *viewContentTrailingGuide;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (retain, nonatomic) NSView *badgeView;
@property (retain, nonatomic) NSView *accessoryView;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic, getter=isSelectable) BOOL selectable;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (id)_labelAttributedStringWithString:(id)a0;
- (double)_baselineMarginForValueMode:(long long)a0;
- (void)setUpAccessibility;

@end
