@class NSAttributedString;

@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel

@property (nonatomic) unsigned long long fontScale;
@property (copy, nonatomic) NSAttributedString *body;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (void)updateWithConfiguration:(id)a0;
- (unsigned long long)fieldType;

@end
