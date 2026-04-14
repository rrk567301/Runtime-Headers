@class NSAttributedString;

@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel

@property (nonatomic) unsigned long long fontScale;
@property (copy, nonatomic) NSAttributedString *body;
@property (nonatomic) unsigned long long position;

- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 body:(id)a1;

@end
