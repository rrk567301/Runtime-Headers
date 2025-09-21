@class NSString, NSNumber, NSArray;

@interface SPUISWalletTransactionResultBuilder : SPUISWalletResultBuilder

@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *transactionAmount;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSString *cashBackPercentage;
@property (retain, nonatomic) NSArray *descriptions;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildSecondaryTitle;
- (BOOL)buildSecondaryTitleIsDetached;
- (id)buildTitle;
- (id)buildTrailingTopText;

@end
