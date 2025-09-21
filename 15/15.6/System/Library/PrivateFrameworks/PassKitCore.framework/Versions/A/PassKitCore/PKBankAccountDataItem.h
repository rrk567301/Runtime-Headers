@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) char showPeerPaymentBalance;
@property (readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (char)isValidWithError:(id *)a0;

@end
