@class NSData;

@interface PKPaymentSetupFieldBuiltInCardPinCode : PKPaymentSetupFieldText

@property (retain, nonatomic) NSData *transactionId;

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addSupplementalSubmissionValues:(id)a0;

@end
