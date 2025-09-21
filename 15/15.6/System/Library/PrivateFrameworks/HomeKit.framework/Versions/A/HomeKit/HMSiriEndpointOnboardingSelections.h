@class NSString, NSArray, HMSettingLanguageValue;

@interface HMSiriEndpointOnboardingSelections : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property char hasSiriEnabled;
@property char hasAllowHeySiri;
@property char hasAirPlayEnabled;
@property char hasShareSiriAnalyticsEnabled;
@property char hasExplicitContentAllowed;
@property char hasLanguageValue;
@property char hasAnnounceEnabled;
@property char hasDoorbellChimeEnabled;
@property char hasLightWhenUsingSiriEnabled;
@property (getter=isSiriEnabled) char siriEnabled;
@property char allowHeySiri;
@property (getter=isAirPlayEnabled) char airPlayEnabled;
@property (getter=isShareSiriAnalyticsEnabled) char shareSiriAnalyticsEnabled;
@property (getter=isExplicitContentAllowed) char explicitContentAllowed;
@property (retain) HMSettingLanguageValue *languageValue;
@property (getter=isDoorbellChimeEnabled) char doorbellChimeEnabled;
@property (getter=isAnnounceEnabled) char announceEnabled;
@property (getter=isLightWhenUsingSiriEnabled) char lightWhenUsingSiriEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)_initWithSiriEnabled:(char)a0 allowHeySiri:(char)a1 airPlayEnabled:(char)a2 playbackInfluencesForYouEnabled:(char)a3 shareSiriAnalyticsEnabled:(char)a4 explicitContentAllowed:(char)a5 languageValue:(id)a6;
- (id)initWithSiriEnabled:(char)a0 allowHeySiri:(char)a1 airPlayEnabled:(char)a2;
- (id)initWithSiriEnabled:(char)a0 allowHeySiri:(char)a1 airPlayEnabled:(char)a2 languageValue:(id)a3;
- (id)initWithSiriEnabled:(char)a0 allowHeySiri:(char)a1 airPlayEnabled:(char)a2 playbackInfluencesForYouEnabled:(char)a3 shareSiriAnalyticsEnabled:(char)a4 explicitContentAllowed:(char)a5;
- (id)initWithSiriEnabled:(char)a0 allowHeySiri:(char)a1 airPlayEnabled:(char)a2 playbackInfluencesForYouEnabled:(char)a3 shareSiriAnalyticsEnabled:(char)a4 explicitContentAllowed:(char)a5 languageValue:(id)a6;
- (id)payloadCopy;

@end
