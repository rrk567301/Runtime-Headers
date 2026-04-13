@class NSTextField, PKPaymentCouponCodeDataItem, PKPaymentAuthorizationLayout, NSString, NSStackView, NSButton;

@interface PKPaymentAuthorizationCouponCodeItemView : NSView <NSTextFieldDelegate>

@property (retain, nonatomic) NSTextField *labelTextField;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSStackView *entryStackView;
@property (retain, nonatomic) NSTextField *entryTextField;
@property (retain, nonatomic) NSButton *applyButton;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (readonly, nonatomic) PKPaymentCouponCodeDataItem *dataItem;
@property (readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)apply:(id)a0;
- (id)createLabelTextField;
- (id)createStackView;
- (id)createEntryStackView;
- (id)createEntryTextFieldWithDataItem:(id)a0 accessibilityTitleUIElement:(id)a1 editable:(BOOL)a2;
- (id)createApplyButtonWithAccessibilityTitleUIElement:(id)a0;
- (id)createErrorTextFieldWithError:(id)a0 accessibilityTitleUIElement:(id)a1;
- (id)initWithDataItem:(id)a0 paymentAuthorizationLayout:(id)a1 editable:(BOOL)a2;

@end
