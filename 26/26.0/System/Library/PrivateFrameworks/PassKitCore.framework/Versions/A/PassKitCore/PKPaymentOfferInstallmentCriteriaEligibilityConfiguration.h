@class NSDecimalNumber, NSString, NSArray;

@interface PKPaymentOfferInstallmentCriteriaEligibilityConfiguration : NSObject <PKPaymentOfferCriteriaEligibilityConfiguration>

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, nonatomic) long long payLaterSuppressionMode;
@property (readonly, nonatomic) NSString *deviceRegion;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
