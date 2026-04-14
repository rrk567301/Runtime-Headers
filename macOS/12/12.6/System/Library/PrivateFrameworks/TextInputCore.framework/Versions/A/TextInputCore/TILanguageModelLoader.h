@class NSArray, NSString, TIInputMode, TILanguageModelAdaptationContext;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject {
    NSArray *_staticResourcePaths;
}

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) BOOL usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;

+ (void)contactStoreDidChange:(id)a0;
+ (void)performMaintenance;
+ (id)sharedLanguageModelLoaderForInputMode:(id)a0 staticResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4;
+ (void)startObservingContactStore;
+ (id)knownClients;
+ (void)clearDynamicLearningCaches;
+ (void)flushDynamicLearningCaches;
+ (id)recipientRecords;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })modelForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3;
+ (void)clearDynamicResourcesAtPath:(id)a0;
+ (void)dropResourcesExcludingInputModes:(id)a0 flushCache:(BOOL)a1;
+ (void)setAsynchronousLoad:(BOOL)a0;
+ (void)setOfflineTrainingEnabled:(BOOL)a0;
+ (void)resetClientAndRecipientCache;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })newLanguageModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 completion:(id /* block */)a2;
- (id)initWithInputMode:(id)a0 staticResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4;
- (void)clearDynamicLearningCaches;
- (void)flushDynamicLearningCaches;
- (BOOL)hasLanguageModelBundle;
- (void)performLearningIfNecessaryForClient:(id)a0 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a1;
- (void)findRecordsMatchingRecipient:(id)a0 completionHandler:(id /* block */)a1;
- (void)lookupRecordForRecipientIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLanguageModelClientIdentifier:(id)a0;
- (void)setLanguageModelRecipientIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })lightweightLanguageModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })languageModelForAdaptationContext:(id)a0;

@end
