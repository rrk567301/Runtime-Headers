@class NSDictionary;

@interface LNFeatureFlags : NSObject

@property (class, readonly, nonatomic) NSDictionary *allFeatures;
@property (class, readonly, nonatomic) char isActionTranscriptEnabled;
@property (class, readonly, nonatomic) char isRuntimeMetadataSupported;
@property (class, readonly, nonatomic) char isStaticMetadataIngestionEnabled;
@property (class, readonly, nonatomic) char isViewActionAnnotationEnabled;
@property (class, readonly, nonatomic) char isVocabularyDonationEnabled;
@property (class, readonly, nonatomic) char isLowPowerDeviceEnabled;
@property (class, readonly, nonatomic) char isConditionallyEnabledIntentsEnabled;
@property (class, readonly, nonatomic) char isAppShortcutsOmittingAppNameEnabled;
@property (class, readonly, nonatomic) char isProductionAppEventEnabled;
@property (class, readonly, nonatomic) char isAppMetadataViaXPCEnabled;
@property (class, readonly, nonatomic) char isPersonaOpenApplicationOptionEnabled;
@property (class, readonly, nonatomic) char isAssistantIntentPhraseExpansionEnabled;

+ (void)setIsAppShortcutsOmittingAppNameEnabled:(char)a0;
+ (void)setIsVocabularyDonationOverrideEnabled:(char)a0;

@end
