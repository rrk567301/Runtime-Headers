@class NSArray, NSString, TIInputMode, TILanguageModelAdaptationContext, NSDictionary;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic, getter=isMultiLingualModeEnabled) BOOL multiLingualModeEnabled;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSArray *customResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) BOOL usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;

+ (void)performMaintenance;
+ (void)contactStoreDidChange:(id)a0;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)a0;
+ (void)dropResourcesExcludingInputModes:(id)a0 flushCache:(BOOL)a1;
+ (void)flushDynamicLearningCaches;
+ (void)flushDynamicResourcesForInputModes:(id)a0;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })modelForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3 isMultiLingualModeEnabled:(BOOL)a4 trialParameters:(id)a5;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(BOOL)a0;
+ (void)setOfflineTrainingEnabled:(BOOL)a0;
+ (id)sharedLanguageModelLoaderForInputMode:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4 isMultiLingualModeEnabled:(BOOL)a5 trialParameters:(id)a6;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3 isMultiLingualModeEnabled:(BOOL)a4;
+ (void)unwireAllLanguageModelMemory;
+ (void)wireAllLanguageModelMemory;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearDynamicLearningCaches;
- (void)findRecordsMatchingRecipient:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushDynamicLearningCaches;
- (BOOL)hasLanguageModelBundle;
- (id)initWithInputMode:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4 isMultiLingualModeEnabled:(BOOL)a5 trialParameters:(id)a6;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })languageModelForAdaptationContext:(id)a0;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })lightweightLanguageModel;
- (void)lookupRecordForRecipientIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)a0 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a1;
- (void)setLanguageModelClientIdentifier:(id)a0;
- (void)setLanguageModelRecipientIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 completion:(id /* block */)a2;
- (void)unwireLanguageModelMemory;
- (void)wireLanguageModelMemory;

@end
