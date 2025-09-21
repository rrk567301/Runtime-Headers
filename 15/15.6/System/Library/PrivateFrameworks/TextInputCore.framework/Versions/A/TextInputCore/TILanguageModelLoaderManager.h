@interface TILanguageModelLoaderManager : NSObject

+ (void)contactStoreDidChange:(id)a0;
+ (void)performMaintenance;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)a0;
+ (void)dropResourcesExcludingInputModes:(id)a0;
+ (void)flushDynamicLearningCaches;
+ (void)flushDynamicResourcesForInputModes:(id)a0;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })modelForLocale:(id)a0 isMultilingualModel:(char)a1 languageLocales:(id)a2 adaptationContext:(id)a3 staticResourcePaths:(id)a4 dynamicResourcePath:(id)a5 isMultiLingualModeEnabled:(char)a6 isSiriMode:(char)a7 validEnglishTransformerMultilingualConfig:(char)a8 trialParameters:(id)a9 inlineCompletionPrecision:(int)a10 isInlineCompletionEnabled:(char)a11;
+ (id)modelLocalesForInputModes:(id)a0;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(char)a0;
+ (void)setOfflineTrainingEnabled:(char)a0;
+ (id)sharedLanguageModelLoaderForModelLocaleIdentifier:(id)a0 isMultilingualModel:(char)a1 customResourcePaths:(id)a2 dynamicResourcePath:(id)a3 mobileAssets:(id)a4 usesLinguisticContext:(char)a5 isMultiLingualModeEnabled:(char)a6 validEnglishTransformerMultilingualConfig:(char)a7 isSiriMode:(char)a8 trialParameters:(id)a9 isInlineCompletionEnabled:(char)a10;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubForModelLocale:(id)a0 isMultilingualModel:(char)a1 languageLocales:(id)a2 adaptationContext:(id)a3 staticResourcePaths:(id)a4 dynamicResourcePath:(id)a5 isMultiLingualModeEnabled:(char)a6 isSiriMode:(char)a7 isInlineCompletionEnabled:(char)a8;
+ (void)unwireAllLanguageModelMemory;
+ (void)wireAllLanguageModelMemory;

@end
