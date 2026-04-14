@class NSString, _INVocabularyValidator, NSObject;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _INVocabularyValidator *_validator;
}

@property (readonly, copy, nonatomic) NSString *baseDirectoryPath;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *appBundlePath;

+ (id)managerForBundleID:(id)a0 bundlePath:(id)a1;
+ (id)_hashOfAppPath:(id)a0;
+ (id)_latestVocabularyStringsAt:(id)a0;
+ (void)deleteAllUserVocabularyFromAllAppsAsync;
+ (id)appDatastoreDirectoryForAppBundleID:(id)a0 bundlePath:(id)a1;
+ (id)_customVocabularyDirectory;
+ (void)_iterateVocabularyWithSummary:(id)a0 optionalBlock:(id /* block */)a1;
+ (id)_globalClassQueue;
+ (void)enumerateVocabularyUsingBlock:(id /* block */)a0;
+ (id)savedCustomVocabularyOverviewDictionary;

- (id)getPathToLatestVocabulary:(id *)a0 pathDuringReading:(id *)a1 sentVocabulary:(id *)a2 forIntentSlot:(id)a3;
- (void)writeLatestVocabularyItems:(id)a0 forIntentSlot:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)deleteVocabularyStoreItemAt:(id)a0;
- (id)deleteIntentSlot:(id)a0;
- (void)checkIfSyncSlot:(id)a0 isAllowedWithCompletion:(id /* block */)a1;
- (void)_writeLatestVocabularyItems:(id)a0 forIntentSlot:(id)a1 completion:(id /* block */)a2;
- (id)_validator;
- (id)deleteEverything;
- (id)_baseDirectoryPathForIntentSlot:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseDirectory:(id)a0 appBundleID:(id)a1 appBundlePath:(id)a2;
- (id)_documentWithItems:(id)a0 forIntentSlot:(id)a1;

@end
