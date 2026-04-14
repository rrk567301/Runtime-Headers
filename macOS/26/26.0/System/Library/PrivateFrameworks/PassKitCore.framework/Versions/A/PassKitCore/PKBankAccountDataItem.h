@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) BOOL showPeerPaymentBalance;
@property (readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithModel:(id)a0;
- (long long)context;
- (void).cxx_destruct;

@end
