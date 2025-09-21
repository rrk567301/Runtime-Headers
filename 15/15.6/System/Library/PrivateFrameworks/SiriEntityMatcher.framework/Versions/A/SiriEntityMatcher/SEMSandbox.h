@class SEMIndexSiteReadAccess, NSString, NSURL, SEMAuxiliaryFilesystemBase, SEMSandboxSettings, NSMutableDictionary, NSObject, SEMSandboxIndexSiteCache, SEMIndexSiteManager;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface SEMSandbox : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sandboxBaseName;
    NSURL *_rootDirectoryURL;
    SEMSandboxSettings *_settings;
    SEMIndexSiteReadAccess *_indexSiteReadAccess;
    SEMAuxiliaryFilesystemBase *_base;
    char _sandboxIsSaved;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSMutableDictionary *_sharedOverrideCache;
}

@property (readonly, nonatomic) SEMSandboxIndexSiteCache *readerCache;
@property (readonly, nonatomic) SEMSandboxIndexSiteCache *writerCache;
@property (readonly, nonatomic) SEMIndexSiteManager *indexSiteManager;
@property (readonly, nonatomic) NSString *sandboxId;

+ (void)initialize;
+ (id)loadWithSandboxId:(id)a0 error:(id *)a1;
+ (id)sandboxWithKVProfile:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)sandboxWithRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)_sandboxBaseNameWithId:(id)a0;
+ (id)sandboxWithSerializedSets:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)sandboxWithSetEnumerator:(id)a0 locale:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)save;
- (id)rootDirectoryURL;
- (id)appCustomVocabularySearcherWithUserId:(id)a0;
- (id)indexMatcher;
- (id)_loadSavedProfile;
- (id)_loadSavedSettings;
- (char)_saveSettings;
- (id)appCustomVocabularySearcher;
- (id)initWithSandboxId:(id)a0 sandboxIsSaved:(char)a1 setEnumerator:(id)a2 settings:(id)a3;

@end
