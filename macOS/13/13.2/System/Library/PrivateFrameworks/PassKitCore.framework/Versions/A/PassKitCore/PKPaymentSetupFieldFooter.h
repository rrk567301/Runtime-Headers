@class NSAttributedString;

@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel

@property (nonatomic) unsigned long long fontScale;
@property (copy, nonatomic) NSAttributedString *body;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)a0;

@end
