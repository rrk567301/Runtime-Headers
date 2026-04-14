@class CKVAuxiliaryFilesystemBase, NSString, CKVIndexManager, CKVSettings, NSObject, CKVDonationManager;
@protocol KVDonateServiceProvider, OS_dispatch_queue, CKVSearcherProvider;

@interface CKVocabularySandbox : NSObject {
    CKVDonationManager *_donationManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sandboxBaseName;
    CKVAuxiliaryFilesystemBase *_base;
    BOOL _sandboxIsSaved;
}

@property (readonly, nonatomic) CKVIndexManager *indexManager;
@property (readonly, nonatomic) NSObject<KVDonateServiceProvider> *donateServiceProvider;
@property (readonly, nonatomic) NSObject<CKVSearcherProvider> *searcherProvider;
@property (nonatomic) double synchronousDonatorTimeout;
@property (readonly, nonatomic) CKVSettings *settings;
@property (readonly, nonatomic) NSString *sandboxId;

+ (void)initialize;
+ (id)sandboxWithRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)sandboxWithRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;
+ (id)_sandboxWithRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;
+ (id)sandboxWithProfile:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)sandboxWithProfile:(id)a0 settings:(id)a1 error:(id *)a2;
+ (id)loadWithSandboxId:(id)a0 error:(id *)a1;
+ (id)_sandboxBaseNameWithId:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)rootDirectoryURL;
- (id)save;
- (id)initWithSettings:(id)a0;
- (id)donatorWithOriginAppId:(id)a0;
- (long long)synchronousDonatorWithOriginAppId:(id)a0 replaceAllVocabularyOfClass:(Class)a1 withVocabulary:(id)a2;
- (id)initWithSandboxId:(id)a0 sandboxIsSaved:(BOOL)a1 settings:(id)a2;
- (BOOL)_saveSettings;
- (id)_loadSavedSettings;
- (id)searcher;
- (id)searcherForUserId:(id)a0;

@end
