@class NSSet, PKOSVersionRequirementRange;

@interface PKHowToUseWalletRequirements : NSObject

@property (readonly, nonatomic) PKOSVersionRequirementRange *osVersions;
@property (readonly, nonatomic) unsigned long long capability;
@property (readonly, nonatomic) NSSet *supportedLanguages;
@property (readonly, nonatomic) NSSet *supportedRegions;

+ (id)requirementsToPrioritize:(id)a0 otherRequirements:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)deviceMeetsRequirements;
- (BOOL)explicitlyMatchesLanguage;
- (BOOL)explicitlyMatchesRegion;
- (BOOL)supportsAllLanguages;
- (BOOL)supportsAllRegions;

@end
