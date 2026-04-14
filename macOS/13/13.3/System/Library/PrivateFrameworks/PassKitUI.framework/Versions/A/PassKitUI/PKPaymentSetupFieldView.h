@class PKPaymentSetupField;
@protocol PKPaymentSetupFieldViewDelegate;

@interface PKPaymentSetupFieldView : NSView

@property (retain, nonatomic) PKPaymentSetupField *paymentSetupField;
@property (weak, nonatomic) id<PKPaymentSetupFieldViewDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (Class)_setupFieldViewClassForSetupField:(id)a0;
+ (id)viewForSetupField:(id)a0;

- (void).cxx_destruct;
- (id)label;
- (id)initWithSetupField:(id)a0;

@end
