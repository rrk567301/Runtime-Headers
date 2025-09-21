@class NSString, NSArray, TILanguageModelAdaptationContext, NSDictionary;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) NSString *modelLocaleIdentifier;
@property (readonly, nonatomic) char isMultilingualModel;
@property (readonly, nonatomic) char isSiriMode;
@property (readonly, nonatomic, getter=isMultiLingualModeEnabled) char multiLingualModeEnabled;
@property (readonly, nonatomic) char validEnglishTransformerMultilingualConfig;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSArray *customResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) char usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (nonatomic) int inlineCompletionPrecision;
@property (nonatomic) char isInlineCompletionEnabled;
@property (nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearDynamicLearningCaches;
- (void)findRecordsMatchingRecipient:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushDynamicLearningCaches;
- (id)initWithModelLocaleIdentifier:(id)a0 isMultilingualModel:(char)a1 customResourcePaths:(id)a2 dynamicResourcePath:(id)a3 mobileAssets:(id)a4 usesLinguisticContext:(char)a5 isMultiLingualModeEnabled:(char)a6 isSiriMode:(char)a7 validEnglishTransformerMultilingualConfig:(char)a8 trialParameters:(id)a9 inlineCompletionPrecision:(int)a10 isInlineCompletionEnabled:(char)a11;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })languageModelForAdaptationContext:(id)a0 languageLocales:(id)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })lightweightLanguageModelForLanguageLocales:(id)a0;
- (void)loadLanguageModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })loadStubLanguageModelForLanguageLocales:(id)a0 withModelLocale:(id)a1 withAdaptationContext:(id)a2;
- (void)lookupRecordForRecipientIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (char)monolingualLanguageModelBundleExists:(id)a0;
- (char)multilingualLanguageModelBundleExists;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })newLanguageModelForLanguageLocales:(id)a0;
- (void)performLearningIfNecessaryForClient:(id)a0 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a1;
- (void)reloadLanguageModelWithLanguageLocales:(id)a0;
- (void)setLanguageModelClientIdentifier:(id)a0;
- (void)setLanguageModelRecipientIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 forLanguageLocales:(id)a2;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 forLanguageLocales:(id)a2 completion:(id /* block */)a3;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubLanguageModelForLanguageLocales:(id)a0 withModelLocale:(id)a1 withAdaptationContext:(id)a2;
- (void)unwireLanguageModelMemory;
- (void)wireLanguageModelMemory;

@end
