@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) BOOL showPeerPaymentBalance;
@property (readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;

+ (long long)dataType;

- (void).cxx_destruct;
- (long long)context;
- (id)initWithModel:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
