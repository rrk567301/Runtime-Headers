@class NSString, NSArray, PKCurrencyAmount;

@interface PKPaymentEligibilitySupplementaryData : NSObject

@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) PKCurrencyAmount *accountBalance;
@property (readonly, copy, nonatomic) NSArray *cloudStoreZoneNames;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
