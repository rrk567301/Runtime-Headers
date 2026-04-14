@class NSDecimalNumber, NSArray, NSTimeZone, NSSet;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *feePercentage;
@property (copy, nonatomic) NSDecimalNumber *minimumFee;
@property (copy, nonatomic) NSDecimalNumber *maximumFee;
@property (copy, nonatomic) NSArray *amountSuggestions;
@property (copy, nonatomic) NSArray *thresholdSuggestions;
@property (retain, nonatomic) NSArray *frequencyOptions;
@property (copy, nonatomic) NSTimeZone *productTimeZone;
@property (nonatomic) long long maximumPayments;
@property (nonatomic) long long endProcessingHour;
@property (nonatomic) double proactiveFetchPeriod;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (copy, nonatomic) NSSet *supportedFundingSourceCountryCodes;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_suggestionsFromStrings:(id)a0;
- (BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)a0;

@end
