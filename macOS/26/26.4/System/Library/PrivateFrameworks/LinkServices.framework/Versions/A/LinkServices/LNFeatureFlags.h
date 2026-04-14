@class NSDictionary;

@interface LNFeatureFlags : NSObject

@property (class, readonly, nonatomic) NSDictionary *allFeatures;
@property (class, readonly, nonatomic) BOOL isActionTranscriptEnabled;
@property (class, readonly, nonatomic) BOOL isRuntimeMetadataSupported;
@property (class, readonly, nonatomic) BOOL isStaticMetadataIngestionEnabled;
@property (class, readonly, nonatomic) BOOL isViewActionAnnotationEnabled;
@property (class, readonly, nonatomic) BOOL isVocabularyDonationEnabled;
@property (class, readonly, nonatomic) BOOL isLowPowerDeviceEnabled;
@property (class, readonly, nonatomic) BOOL isConditionallyEnabledIntentsEnabled;
@property (class, readonly, nonatomic) BOOL isAppShortcutsOmittingAppNameEnabled;
@property (class, readonly, nonatomic) BOOL isProductionAppEventEnabled;
@property (class, readonly, nonatomic) BOOL isAppMetadataViaXPCEnabled;
@property (class, readonly, nonatomic) BOOL isPersonaOpenApplicationOptionEnabled;
@property (class, readonly, nonatomic) BOOL isAssistantIntentPhraseExpansionEnabled;
@property (class, readonly, nonatomic) BOOL isConstraintEvaluationEnabled;
@property (class, readonly, nonatomic) BOOL isSideEffectConfirmationEnabled;
@property (class, readonly, nonatomic) BOOL isDestructiveSideEffectConfirmationEnabled;
@property (class, readonly, nonatomic) BOOL isInjectableSideEffectConfirmationEnabled;
@property (class, readonly, nonatomic) BOOL is2025IndexEnabled;

+ (void)setIsConstraintEvaluationOverrideEnabled:(BOOL)a0;
+ (void)setIsAppShortcutsOmittingAppNameEnabled:(BOOL)a0;
+ (void)setIsSideEffectConfirmationEnabled:(BOOL)a0;
+ (void)setIsVocabularyDonationOverrideEnabled:(BOOL)a0;
+ (void)setIsDestructiveSideEffectConfirmationEnabled:(BOOL)a0;
+ (void)setIsInjectableSideEffectConfirmationEnabled:(BOOL)a0;

@end
