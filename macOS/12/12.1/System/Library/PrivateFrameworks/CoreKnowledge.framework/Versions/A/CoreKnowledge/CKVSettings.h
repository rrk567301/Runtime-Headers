@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;
@property (readonly, nonatomic) BOOL isSandboxInstance;

+ (id)defaultSettings;
+ (id)sandboxSettingsWithLocale:(id)a0;
+ (id)defaultSandboxSettings;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalization:(id)a0 isSandboxInstance:(BOOL)a1;
- (BOOL)isVocabularyDonationEnabled;
- (BOOL)isSkitEnabled;
- (BOOL)shouldDonateContacts;
- (BOOL)shouldDonateAppInfo;
- (BOOL)shouldDonateCustomVocabulary;
- (BOOL)shouldDonateHomeKit;
- (BOOL)shouldDonateMedia;
- (BOOL)_shouldDonateAll;
- (BOOL)_shouldOverrideDonationSettings;
- (id)overrideRankerUsePriors;
- (id)overrideRankerUseTopFive;
- (id)overrideRankerMatchScoreWeight;
- (id)overrideRankerPriorScoreWeight;
- (id)overrideRankerRegionalRelativeThreshold;
- (id)overrideRankerGlobalRelativeThreshold;
- (id)overrideRankerAbsoluteThreshold;
- (id)overrideRankerAllowPartialMatch;
- (id)overrideRankerAllowApproximateMatch;
- (id)overrideRankerPrioritizeExactMatch;

@end
