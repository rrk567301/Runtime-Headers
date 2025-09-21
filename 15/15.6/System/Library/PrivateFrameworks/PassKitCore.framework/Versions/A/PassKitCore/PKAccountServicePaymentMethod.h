@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) PKBankAccountInformation *bankAccountInformation;
@property (copy, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) char deviceSupportsPeerPaymentAccountPayment;
@property (nonatomic) unsigned long long selectedMethods;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBankAccountInformation:(id)a0 peerPaymentBalance:(id)a1 deviceSupportsPeerPaymentAccountPayment:(char)a2 selectedMethods:(unsigned long long)a3;

@end
