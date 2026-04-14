@class NSData;

@interface PKPaymentSetupFieldBuiltInCardPinCode : PKPaymentSetupFieldText

@property (retain, nonatomic) NSData *transactionId;

- (BOOL)isBuiltIn;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)addSupplementalSubmissionValues:(id)a0;

@end
