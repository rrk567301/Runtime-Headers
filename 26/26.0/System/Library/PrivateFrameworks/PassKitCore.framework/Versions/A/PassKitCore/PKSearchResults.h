@class NSString, NSArray;

@interface PKSearchResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *placeholderString;
@property (copy, nonatomic) NSArray *suggestedAutocompleteTokens;
@property (copy, nonatomic) NSArray *pendingPeerPaymentRequestResults;
@property (copy, nonatomic) NSArray *topHitAccountResults;
@property (copy, nonatomic) NSArray *accountResults;
@property (copy, nonatomic) NSArray *orderResults;
@property (copy, nonatomic) NSArray *topHitPaymentPassResults;
@property (copy, nonatomic) NSArray *topHitKeyAndIDResults;
@property (copy, nonatomic) NSArray *topHitBarcodePassResults;
@property (copy, nonatomic) NSArray *paymentPassResults;
@property (copy, nonatomic) NSArray *keyAndIDResults;
@property (copy, nonatomic) NSArray *barcodePassResults;
@property (copy, nonatomic) NSArray *expiredPassResults;
@property (copy, nonatomic) NSArray *paymentSetupProductResults;
@property (copy, nonatomic) NSArray *categoryResults;
@property (copy, nonatomic) NSArray *merchantResults;
@property (copy, nonatomic) NSArray *transactionResults;
@property (copy, nonatomic) NSArray *personResults;
@property (copy, nonatomic) NSArray *locationResults;
@property (copy, nonatomic) NSArray *transactionTagResults;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
