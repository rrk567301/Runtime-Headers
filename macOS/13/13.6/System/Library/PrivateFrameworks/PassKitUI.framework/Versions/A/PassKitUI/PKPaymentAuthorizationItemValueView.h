@class NSTextField, PKPaymentAuthorizationLayout, NSLayoutGuide, PKPaymentAuthorizationItemValue;

@interface PKPaymentAuthorizationItemValueView : NSView

@property (retain, nonatomic) NSTextField *textLabel;
@property (retain, nonatomic) NSTextField *detailTextLabel;
@property (nonatomic) BOOL didPrepareConstraints;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (copy, nonatomic) PKPaymentAuthorizationItemValue *value;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) NSLayoutGuide *firstBaselineGuide;
@property (readonly, nonatomic) NSLayoutGuide *lastBaselineGuide;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_prepareConstraints;
- (void)_createSubviews;
- (id)_fontForMode:(long long)a0;
- (id)_textColorForMode:(long long)a0;
- (double)_textToDetailTextMargin;
- (id)_valueDetailTextAttributedStringWithString:(id)a0 mode:(long long)a1;
- (id)_valueTextAttributedStringWithString:(id)a0 mode:(long long)a1;
- (void)setAccessibilityTitleForTextFields:(id)a0;

@end
