@class HKFeatureSettings, HKOnboardingCompletion, NSSet, NSDate, NSArray, NSDictionary;

@interface HKFeatureOnboardingRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFeatureSettings *featureSettings;
@property (readonly, copy, nonatomic) HKOnboardingCompletion *onboardingCompletion;
@property (readonly, nonatomic) long long onboardingState;
@property (readonly, copy, nonatomic) NSDate *earliestDateOfAnyOnboardingCompletion;
@property (readonly, copy, nonatomic) NSSet *onboardedCountryCodesForOnboardingState;
@property (readonly, copy, nonatomic) NSSet *allOnboardedCountryCodesRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) NSArray *allOnboardingCompletionsRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) NSDictionary *onboardingCompletionsByState;
@property (readonly, nonatomic, getter=isOnboardingPresent) char onboardingPresent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOnboardingState:(long long)a0 onboardingCompletion:(id)a1 featureSettings:(id)a2;
- (id)initWithOnboardingState:(long long)a0 onboardingCompletionsByState:(id)a1 featureSettings:(id)a2;

@end
